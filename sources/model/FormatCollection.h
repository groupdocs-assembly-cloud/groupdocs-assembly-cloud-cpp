
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="FormatCollection.h">
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

#ifndef GROUPDOCS_ASSEMBLY_CLOUD_API_MODELS_FormatCollection_H_
#define GROUPDOCS_ASSEMBLY_CLOUD_API_MODELS_FormatCollection_H_


#include "../ModelBase.h"

#include "Format.h"
#include <vector>

namespace groupdocs {
namespace assembly {
namespace cloud {
namespace api {
namespace models {

/// <summary>
/// Describes object which contains list of supported file formats.
/// </summary>
class  FormatCollection
    : public ModelBase
{
public:
    FormatCollection();
    virtual ~FormatCollection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FormatCollection members

    /// <summary>
    /// Gets or sets supported file formats.
    /// </summary>
    std::vector<std::shared_ptr<Format>>& getFormats();
    bool formatsIsSet() const;
    void unsetFormats();
    void setFormats(std::vector<std::shared_ptr<Format>> const& value);

protected:
    std::vector<std::shared_ptr<Format>> m_Formats;
    bool m_FormatsIsSet;
};

}
}
}
}
}

#endif /* GROUPDOCS_ASSEMBLY_CLOUD_API_MODELS_FormatCollection_H_ */
