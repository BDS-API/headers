#pragma once

#include "./PackError.h"
#include <memory>
#include <vector>
#include "../../json/Value.h"
#include <string>


class PackError {

public:
    virtual ~PackError();
    virtual std::string getLocErrorMessage()const;

//  PackError(PackErrorType, std::vector<std::string, std::allocator<std::string>> const&); //TODO: incomplete function definition
    void getErrorValue()const;
    std::string getErrorParameters()const;
    std::string getEventErrorMessage()const;
    void serialize(Json::Value &);
    void deserialize(Json::Value const&);
    void getPackErrorType()const;
    PackError(PackError const&);
};
