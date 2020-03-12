#pragma once

#include "PackError.h"
#include <vector>
#include <string>


class PackLoadError : PackError {

public:
    virtual std::string getEventErrorMessageMap()const;
    ~PackLoadError();
    virtual std::string getLocErrorMessageMap()const;
    PackLoadError();
    PackLoadError(PackLoadError const&);
//  PackLoadError(PackParseErrorType, std::vector<std::string> const&); //TODO: incomplete function definition
};
