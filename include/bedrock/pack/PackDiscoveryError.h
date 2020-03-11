#pragma once

#include "./PackError.h"
#include "./PackDiscoveryError.h"
#include <memory>
#include <vector>
#include <string>


class PackDiscoveryError : PackError {

public:
    virtual ~PackDiscoveryError();
    virtual std::string getLocErrorMessageMap()const;
    virtual std::string getEventErrorMessageMap()const;

    PackDiscoveryError(PackDiscoveryError const&);
    PackDiscoveryError();
//  PackDiscoveryError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&); //TODO: incomplete function definition
};
