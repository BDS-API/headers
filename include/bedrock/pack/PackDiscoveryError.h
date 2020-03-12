#pragma once

#include "PackError.h"
#include <vector>
#include <string>


class PackDiscoveryError : PackError {

public:
    virtual std::string getLocErrorMessageMap()const;
    virtual std::string getEventErrorMessageMap()const;
    ~PackDiscoveryError();
    PackDiscoveryError(PackDiscoveryError const&);
    PackDiscoveryError();
//  PackDiscoveryError(PackParseErrorType, std::vector<std::string> const&); //TODO: incomplete function definition
};
