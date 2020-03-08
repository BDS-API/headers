#pragma once

#include "../../json/Value"


class PackError {

public:
    virtual PackError::~PackError()
    virtual void getLocErrorMessage()const;

    PackError(PackErrorType, std::vector<std::string, std::allocator<std::string>> const&);
    void getErrorValue()const;
    void serialize(Json::Value &);
    void deserialize(Json::Value const&);
    void getPackErrorType()const;
    PackError(PackError const&);
};
