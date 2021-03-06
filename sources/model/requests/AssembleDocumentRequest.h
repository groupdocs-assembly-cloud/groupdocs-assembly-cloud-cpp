/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="AssembleDocumentRequest.h">
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
#ifndef assembleDocument_H
#define assembleDocument_H 

#include "cpprest/details/basic_types.h"
#include "AssembleOptions.h"
#include <boost/optional.hpp>

namespace groupdocs {
namespace assembly {
namespace cloud {
namespace api {
namespace models {

class AssembleDocumentRequest{
    public: 
    explicit AssembleDocumentRequest(
        std::shared_ptr<AssembleOptions> assembleOptions
        );

        std::shared_ptr<AssembleOptions> getAssembleOptions() const;
        void setAssembleOptions(std::shared_ptr<AssembleOptions> assembleOptions);
    private:
        std::shared_ptr<AssembleOptions> m_assembleOptions;
};

}
}
}
}
}

#endif