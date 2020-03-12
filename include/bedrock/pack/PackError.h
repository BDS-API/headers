#pragma once

#include <string>
#include <vector>


class PackError {

public:
    ~PackError();
    virtual std::string getLocErrorMessage()const;
    void getPackErrorType()const;
//  PackError(PackErrorType, std::vector<std::string> const&); //TODO: incomplete function definition
    void getErrorValue()const;
    std::string getErrorParameters()const;
    PackError(PackError const&);
    void deserialize(Json::Value const&);
    void serialize(Json::Value &);
    std::string getEventErrorMessage()const;
};
