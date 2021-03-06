/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="AssemblyApiErrorResponse.cpp">
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


#include "AssemblyApiErrorResponse.h"

namespace groupdocs {
namespace assembly {
namespace cloud {
namespace api {
namespace models {

AssemblyApiErrorResponse::AssemblyApiErrorResponse()
{
    m_ErrorIsSet = false;
}

AssemblyApiErrorResponse::~AssemblyApiErrorResponse()
{
}

void AssemblyApiErrorResponse::validate()
{
    // TODO: implement validation
}

web::json::value AssemblyApiErrorResponse::toJson() const
{
    web::json::value val = this->AssemblyResponse::toJson();

    if(m_ErrorIsSet)
    {
        val[_XPLATSTR("Error")] = ModelBase::toJson(m_Error);
    }

    return val;
}

void AssemblyApiErrorResponse::fromJson(web::json::value& val)
{
    this->AssemblyResponse::fromJson(val);

    if(val.has_field(_XPLATSTR("Error")))
    {
        web::json::value& fieldValue = val[_XPLATSTR("Error")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ApiError> newItem(new ApiError());
            newItem->fromJson(fieldValue);
            setError( newItem );
        }
    }
}

void AssemblyApiErrorResponse::toMultipart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix) const
{
    auto namePrefix = ModelBase::fixNamePrefix(prefix);

    if(m_RequestIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + _XPLATSTR("RequestId"), m_RequestId));
        
    }
    if(m_ErrorIsSet)
    {
        if (m_Error.get())
        {
            m_Error->toMultipart(multipart, _XPLATSTR("Error."));
        }
        
    }
}

void AssemblyApiErrorResponse::fromMultiPart(const std::shared_ptr<MultipartFormData>& multipart, const utility::string_t& prefix)
{
    if(multipart->hasContent(_XPLATSTR("RequestId")))
    {
        setRequestId(ModelBase::stringFromHttpContent(multipart->getContent(_XPLATSTR("RequestId"))));
    }
    if(multipart->hasContent(_XPLATSTR("Error")))
    {
        if(multipart->hasContent(_XPLATSTR("Error")))
        {
            std::shared_ptr<ApiError> newItem(new ApiError());
            newItem->fromMultiPart(multipart, _XPLATSTR("Error."));
            setError( newItem );
        }
    }
}

std::shared_ptr<ApiError> AssemblyApiErrorResponse::getError() const
{
    return m_Error;
}


void AssemblyApiErrorResponse::setError(std::shared_ptr<ApiError> value)
{
    m_Error = value;
    m_ErrorIsSet = true;
}
bool AssemblyApiErrorResponse::errorIsSet() const
{
    return m_ErrorIsSet;
}

void AssemblyApiErrorResponse::unsetError()
{
    m_ErrorIsSet = false;
}

}
}
}
}
}

