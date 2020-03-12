#pragma once

#include <vector>
#include <string>
#include "PackError.h"


class PackLoadError : PackError {

public:
    virtual std::string getEventErrorMessageMap()const;
    virtual std::string getLocErrorMessageMap()const;
    ~PackLoadError();
    PackLoadError(PackLoadError const&);
//  PackLoadError(PackParseErrorType, std::vector<std::string> const&); //TODO: incomplete function definition
    PackLoadError();
};
