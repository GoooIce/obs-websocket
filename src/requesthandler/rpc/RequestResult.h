#pragma once

#include "RequestStatus.h"
#include "../../utils/Utils.h"

struct RequestResult
{
	RequestResult(RequestStatus::RequestStatus statusCode = RequestStatus::Success, json responseData = nullptr, std::string comment = "");
	static RequestResult Success(json responseData = nullptr);
	static RequestResult Error(RequestStatus::RequestStatus statusCode, std::string comment = "");
	RequestStatus::RequestStatus StatusCode;
	json ResponseData;
	std::string Comment;
};