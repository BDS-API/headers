#pragma once

#include "PackError.h"
#include <vector>
#include <string>


class UIPackError : PackError {

public:
    virtual std::string getEventErrorMessageMap()const;
    virtual std::string getLocErrorMessageMap()const;
    ~UIPackError();
    UIPackError();
//  UIPackError(UIPackErrorType, std::vector<std::string> const&); //TODO: incomplete function definition
};
