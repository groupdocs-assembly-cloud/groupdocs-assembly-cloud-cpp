/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="AssemblyResponse.cpp">
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


#include "AssemblyResponse.h"

namespace groupdocs {
namespace assembly {
namespace cloud {
namespace api {
namespace models {

AssemblyResponse::AssemblyResponse()
{
    m_RequestId = utility::conversions::to_string_t("");
    m_RequestIdIsSet = false;
}

AssemblyResponse::~AssemblyResponse()
{
}

void AssemblyResponse::validate()
{
    // TODO: implement validation
}

web::json::value AssemblyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_RequestIdIsSet)
    {
        val[_XPLATSTR("RequestId")] = ModelBase::toJson(m_RequestId);
    }

    return val;
}

void AssemblyResponse::fromJson(web::json::value& val)
{
    if(val.has_field(_XPLATSTR("RequestId")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("RequestId")];
        if(!fieldValue.is_null())
        {
            setRequestId(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void AssemblyResponse::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_RequestIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("RequestId"), m_RequestId));
        
    }
}

void AssemblyResponse::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    if(multipart->hasContent(_XPLATSTR("RequestId")))
    {
        setRequestId(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("RequestId"))));
    }
}

utility::string_t AssemblyResponse::getRequestId() const
{
    return m_RequestId;
}


void AssemblyResponse::setRequestId(utility::string_t value)
{
    m_RequestId = value;
    m_RequestIdIsSet = true;
}
bool AssemblyResponse::requestIdIsSet() const
{
    return m_RequestIdIsSet;
}

void AssemblyResponse::unsetRequestId()
{
    m_RequestIdIsSet = false;
}

}
}
}
}
}

