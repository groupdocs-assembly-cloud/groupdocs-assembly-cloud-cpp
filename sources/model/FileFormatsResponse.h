
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="FileFormatsResponse.h">
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

#ifndef GROUPDOCS_ASSEMBLY_CLOUD_API_MODELS_FileFormatsResponse_H_
#define GROUPDOCS_ASSEMBLY_CLOUD_API_MODELS_FileFormatsResponse_H_


#include "AssemblyResponse.h"
#include "FormatCollection.h"
#include <cpprest/details/basic_types.h>

namespace groupdocs {
namespace assembly {
namespace cloud {
namespace api {
namespace models {

/// <summary>
/// Response with file formats.
/// </summary>
class  FileFormatsResponse
    : public AssemblyResponse
{
public:
    FileFormatsResponse();
    virtual ~FileFormatsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FileFormatsResponse members

    /// <summary>
    /// Gets or sets file formats.
    /// </summary>
    std::shared_ptr<FormatCollection> getFileFormats() const;
    bool fileFormatsIsSet() const;
    void unsetFileFormats();
    void setFileFormats(std::shared_ptr<FormatCollection> value);
    /// <summary>
    /// Gets response status code.
    /// </summary>
    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetCode();
    void setCode(int32_t value);
    /// <summary>
    /// Gets or sets response status.
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();
    void setStatus(utility::string_t value);

protected:
    std::shared_ptr<FormatCollection> m_FileFormats;
    bool m_FileFormatsIsSet;
    int32_t m_Code;
    bool m_CodeIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
};

}
}
}
}
}

#endif /* GROUPDOCS_ASSEMBLY_CLOUD_API_MODELS_FileFormatsResponse_H_ */
