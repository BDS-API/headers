#pragma once

#include "./PackError.h"
#include <memory>
#include "./PackLoadError.h"
#include <vector>
#include <string>


class PackLoadError : PackError {

public:
    virtual ~PackLoadError();
    virtual std::string getLocErrorMessageMap()const;
    virtual std::string getEventErrorMessageMap()const;

    PackLoadError();
//  PackLoadError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&); //TODO: incomplete function definition
    PackLoadError(PackLoadError const&);
};
