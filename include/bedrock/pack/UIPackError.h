#pragma once

#include <vector>
#include <string>
#include "PackError.h"


class UIPackError : PackError {

public:
    virtual std::string getEventErrorMessageMap()const;
    ~UIPackError();
    virtual std::string getLocErrorMessageMap()const;
    UIPackError();
//  UIPackError(UIPackErrorType, std::vector<std::string> const&); //TODO: incomplete function definition
};
