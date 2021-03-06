/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="DeleteFolderRequest.h">
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
#pragma once
#ifndef deleteFolder_H
#define deleteFolder_H 

#include "cpprest/details/basic_types.h"
#include <boost/optional.hpp>

namespace groupdocs {
namespace assembly {
namespace cloud {
namespace api {
namespace models {

class DeleteFolderRequest{
    public: 
     DeleteFolderRequest(
        utility::string_t path,
                boost::optional<utility::string_t> storageName,
                boost::optional<bool> recursive
        );

        utility::string_t getPath() const;
        void setPath(utility::string_t path);

        boost::optional<utility::string_t> getStorageName() const;
        void setStorageName(boost::optional<utility::string_t> storageName);

        boost::optional<bool> getRecursive() const;
        void setRecursive(boost::optional<bool> recursive);
    private:
        utility::string_t m_path;
        boost::optional<utility::string_t> m_storageName;
        boost::optional<bool> m_recursive;
};

}
}
}
}
}

#endif