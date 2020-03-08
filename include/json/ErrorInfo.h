#pragma once



using namespace Json::Reader;

class ErrorInfo {

public:

    ErrorInfo(void);
    ErrorInfo(Json::Reader::ErrorInfo const&);
};
