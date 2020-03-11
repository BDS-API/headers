#pragma once

#include "./ErrorInfo.h"


namespace Json::Reader {

class ErrorInfo {

public:

    ErrorInfo();
    ~ErrorInfo();
    ErrorInfo(Json::Reader::ErrorInfo const&);
};

}