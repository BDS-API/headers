#pragma once

#include <string>


namespace GameRule {

class ValidationError {

public:

    void setSuccess(bool);
    void setDescription(std::string const&);
    ValidationError();
    bool isSuccess()const;
    std::string errorDescriptionParameters()const;
    std::string errorDescription()const;
    ~ValidationError();
};

}