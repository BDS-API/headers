#pragma once

#include "./PackError.h"
#include <memory>
#include <vector>
#include <string>


class UIPackError : PackError {

public:
    virtual ~UIPackError();
    virtual std::string getLocErrorMessageMap()const;
    virtual std::string getEventErrorMessageMap()const;

    UIPackError();
//  UIPackError(UIPackErrorType, std::vector<std::string, std::allocator<std::string>> const&); //TODO: incomplete function definition
};
