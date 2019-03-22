/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="GroupDocs" file="LoadSaveOptionsData.cpp">
*   Copyright (c) 2019 GroupDocs.Assembly for Cloud
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


#include "LoadSaveOptionsData.h"

namespace groupdocs {
namespace assembly {
namespace model {

LoadSaveOptionsData::LoadSaveOptionsData()
{
    m_SaveFormat = _XPLATSTR("");
    m_SaveFormatIsSet = false;
}

LoadSaveOptionsData::~LoadSaveOptionsData()
{
}

void LoadSaveOptionsData::validate()
{
    // TODO: implement validation
}

web::json::value LoadSaveOptionsData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SaveFormatIsSet)
    {
        val[_XPLATSTR("SaveFormat")] = ModelBase::toJson(m_SaveFormat);
    }

    return val;
}

void LoadSaveOptionsData::fromJson(web::json::value& val)
{
    if(val.has_field(_XPLATSTR("SaveFormat")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("SaveFormat")];
        if(!fieldValue.is_null())
        {
            setSaveFormat(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void LoadSaveOptionsData::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_SaveFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("SaveFormat"), m_SaveFormat));
        
    }
}

void LoadSaveOptionsData::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    if(multipart->hasContent(_XPLATSTR("SaveFormat")))
    {
        setSaveFormat(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("SaveFormat"))));
    }
}

utility::string_t LoadSaveOptionsData::getSaveFormat() const
{
    return m_SaveFormat;
}


void LoadSaveOptionsData::setSaveFormat(utility::string_t value)
{
    m_SaveFormat = value;
    m_SaveFormatIsSet = true;
}
bool LoadSaveOptionsData::saveFormatIsSet() const
{
    return m_SaveFormatIsSet;
}

void LoadSaveOptionsData::unsetSaveFormat()
{
    m_SaveFormatIsSet = false;
}

}
}
}
