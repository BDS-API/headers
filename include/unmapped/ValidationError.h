#pragma once



using namespace GameRule;

class ValidationError {

public:

    void setSuccess(bool);
    void setDescription(std::string const&);
    ValidationError(void);
    bool isSuccess()const;
};
