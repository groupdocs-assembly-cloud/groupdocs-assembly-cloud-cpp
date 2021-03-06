properties([
	gitLabConnection('gitlab'),
	[$class: 'ParametersDefinitionProperty', 
		parameterDefinitions: [
			[$class: 'StringParameterDefinition', name: 'branch', defaultValue: 'master', description: 'the branch to build'],
			[$class: 'StringParameterDefinition', name: 'apiUrl', defaultValue: 'https://api-qa.groupdocs.cloud', description: 'api url'],
            [$class: 'BooleanParameterDefinition', name: 'ignoreCiSkip', defaultValue: false, description: 'ignore CI Skip'],
		]
	]
])

def buildCacheImage = "git.auckland.dynabic.com:4567/assembly-cloud/groupdocs.assembly-for-cloud/cpp"
def needToBuildWindows = false
def needToBuildLinux = false

parallel windows: {
    node('windows2016') {
        try {
            gitlabCommitStatus("windows_checkout") {
                stage('windows_checkout'){
                    checkout([$class: 'GitSCM', branches: [[name: params.branch]], doGenerateSubmoduleConfigurations: false, extensions: [[$class: 'LocalBranch', localBranch: "**"]], submoduleCfg: [], userRemoteConfigs: [[credentialsId: '361885ba-9425-4230-950e-0af201d90547', url: 'https://git.auckland.dynabic.com/assembly-cloud/assembly-cpp-sdk.git']]])

                    bat 'git show -s HEAD > gitMessage'
                    def commitMessage = readFile('gitMessage').trim()
                    echo commitMessage
                    needToBuildWindows = params.ignoreCiSkip || !commitMessage.contains('[ci skip]')               
                    bat 'git clean -fdx'
                }
            }
            
            if (needToBuildWindows) {
                gitlabCommitStatus("windows_tests") {
                    stage('windows_tests'){
                        withCredentials([usernamePassword(credentialsId: 'assembly-registry', usernameVariable: 'dockerrigistry_login', passwordVariable: 'dockerregistry_password')]) {
                            bat 'docker login -u "%dockerrigistry_login%" -p "%dockerregistry_password%" git.auckland.dynabic.com:4567'
                        }
                        withCredentials([usernamePassword(credentialsId: '6179b564-811f-48a9-8b85-875076fadbf5', passwordVariable: 'AppKey', usernameVariable: 'AppSid')]) {
                            try {
                                bat (script: "docker pull ${buildCacheImage}/win")
                                bat (script: "docker build -f Dockerfile.windows --cache-from=${buildCacheImage}/win -t ${buildCacheImage}/win -t groupdocs-assembly-cloud-cpp-tests:windows . ")
                                bat (script: "docker push ${buildCacheImage}/win")
                                def apiUrl = params.apiUrl
                                bat 'runInDocker.windows.bat %AppKey% %AppSid% %apiUrl%'
                            } finally {
                                junit '**\\out\\test_result.xml'
                            }
                        }
                    }
                }
            }            
        } finally {
            bat 'docker system prune -f'
            deleteDir()
        }
    }
}, linux: {
    node('words-linux') {
        try {
            gitlabCommitStatus("linux_checkout") {
                stage('linux_checkout'){
                    checkout([$class: 'GitSCM', branches: [[name: params.branch]], doGenerateSubmoduleConfigurations: false, extensions: [[$class: 'LocalBranch', localBranch: "**"]], submoduleCfg: [], userRemoteConfigs: [[credentialsId: '361885ba-9425-4230-950e-0af201d90547', url: 'https://git.auckland.dynabic.com/assembly-cloud/assembly-cpp-sdk.git']]])

                    sh 'git show -s HEAD > gitMessage'
                    def commitMessage = readFile('gitMessage').trim()
                    echo commitMessage
                    needToBuildLinux = params.ignoreCiSkip || !commitMessage.contains('[ci skip]')               
                    sh 'git clean -fdx'
                }
            }
            
            if (needToBuildLinux) {
                gitlabCommitStatus("linux_tests") {
                    stage('linux_tests'){
                        withCredentials([usernamePassword(credentialsId: 'assembly-registry', usernameVariable: 'dockerrigistry_login', passwordVariable: 'dockerregistry_password')]) {
                            sh 'docker login -u "${dockerrigistry_login}" -p "${dockerregistry_password}" git.auckland.dynabic.com:4567'
                        }
                        withCredentials([usernamePassword(credentialsId: '6179b564-811f-48a9-8b85-875076fadbf5', passwordVariable: 'AppKey', usernameVariable: 'AppSid')]) {
                            try {
                                sh (script: "docker pull ${buildCacheImage}/linux")
                                sh (script: "docker build -f Dockerfile.linux --cache-from=${buildCacheImage}/linux -t ${buildCacheImage}/linux -t groupdocs-assembly-cloud-cpp-tests:linux .")
                                sh (script: "docker push ${buildCacheImage}/linux")

                                sh 'docker run --rm -v "$PWD/out:/out/" groupdocs-assembly-cloud-cpp-tests:linux bash groupdocs-assembly-cloud-cpp/scripts/runAll.sh $AppKey $AppSid $apiUrl'
                            } finally {
                                junit '**\\out\\test_result.xml'
                            }
                        }
                    }
                }
            }
        } finally {
            sh 'docker system prune -f'
            deleteDir()
        }
    }
}