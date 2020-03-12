#pragma once

#include <vector>
#include "../../json/Value.h"
#include <string>


class PackError {

public:
    virtual std::string getLocErrorMessage()const;
    ~PackError();
    void deserialize(Json::Value const&);
    PackError(PackError const&);
    std::string getEventErrorMessage()const;
    void serialize(Json::Value &);
    void getPackErrorType()const;
//  PackError(PackErrorType, std::vector<std::string> const&); //TODO: incomplete function definition
    std::string getErrorParameters()const;
    void getErrorValue()const;
};
