/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="CopyFolderRequest.cpp">
*   Copyright (c) 2021 GroupDocs.Assembly for Cloud
* </copyright>
* <summary>
*   Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
* 
*  The above copyright notice and this permission notice shall be included in all
*  copies or substantial portions of the Software.
* 
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*  SOFTWARE.
* </summary> 
-------------------------------------------------------------------------------------------------------------------- **/
#include "CopyFolderRequest.h"
namespace groupdocs{
namespace assembly{
namespace cloud{
namespace api{
namespace models{
CopyFolderRequest::CopyFolderRequest(
        utility::string_t destPath,
                utility::string_t srcPath,
                boost::optional<utility::string_t> srcStorageName,
                boost::optional<utility::string_t> destStorageName
        ) : 
            m_destPath(std::move(destPath)),
            m_srcPath(std::move(srcPath)),
            m_srcStorageName(std::move(srcStorageName)),
            m_destStorageName(std::move(destStorageName))
        {
            
        }

        utility::string_t CopyFolderRequest::getDestPath() const
        {
            return m_destPath;
        }
        void CopyFolderRequest::setDestPath(utility::string_t destPath){
            m_destPath = std::move(destPath);
        }
        utility::string_t CopyFolderRequest::getSrcPath() const
        {
            return m_srcPath;
        }
        void CopyFolderRequest::setSrcPath(utility::string_t srcPath){
            m_srcPath = std::move(srcPath);
        }
        boost::optional<utility::string_t> CopyFolderRequest::getSrcStorageName() const
        {
            return m_srcStorageName;
        }
        void CopyFolderRequest::setSrcStorageName(boost::optional<utility::string_t> srcStorageName){
            m_srcStorageName = std::move(srcStorageName);
        }
        boost::optional<utility::string_t> CopyFolderRequest::getDestStorageName() const
        {
            return m_destStorageName;
        }
        void CopyFolderRequest::setDestStorageName(boost::optional<utility::string_t> destStorageName){
            m_destStorageName = std::move(destStorageName);
        }

}
}
}
}
}