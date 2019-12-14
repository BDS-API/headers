#pragma once

class PackDiscoveryError : PackError {

public:
    virtual ~PackDiscoveryError();

    void PackDiscoveryError(PackDiscoveryError const&);
    void PackDiscoveryError(void);
    void PackDiscoveryError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&);
};
