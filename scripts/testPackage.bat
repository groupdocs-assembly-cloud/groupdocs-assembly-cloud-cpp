REM Generate credentials
echo { "AppKey" : "%1", > groupdocs-assembly-cloud-cpp\app\servercreds.json
echo  "AppSid" : "%2", >> groupdocs-assembly-cloud-cpp\app\servercreds.json
echo  "BaseUrl" : "%3" >> groupdocs-assembly-cloud-cpp\app\servercreds.json
echo } >> groupdocs-assembly-cloud-cpp\app\servercreds.json

REM remove build directory
rmdir groupdocs-assembly-cloud-cpp\app\build /s /q

REM Compile aw
mkdir groupdocs-assembly-cloud-cpp\app\build
cmake -G "Visual Studio 15 2017" -Thost=x64 -Ax64 -Dcpprestsdk_ROOT=install/cpprestsdk -S groupdocs-assembly-cloud-cpp\app -B groupdocs-assembly-cloud-cpp\app\build  || goto end
cmake --build groupdocs-assembly-cloud-cpp\app\build --config Release --target all_unity  || goto end

REM Run tests
cmake -E chdir groupdocs-assembly-cloud-cpp\app\build ctest -V -C Release  || goto end
copy .\groupdocs-assembly-cloud-cpp\app\build\tests\test_result.xml c:\out

:end
exit /b %ERRORLEVEL%
