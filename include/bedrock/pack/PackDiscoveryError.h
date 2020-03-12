#pragma once

#include <vector>
#include <string>
#include "PackError.h"


class PackDiscoveryError : PackError {

public:
    virtual std::string getLocErrorMessageMap()const;
    virtual std::string getEventErrorMessageMap()const;
    ~PackDiscoveryError();
    PackDiscoveryError(PackDiscoveryError const&);
//  PackDiscoveryError(PackParseErrorType, std::vector<std::string> const&); //TODO: incomplete function definition
    PackDiscoveryError();
};
