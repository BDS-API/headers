#pragma once

class PackDiscoveryError : PackError {

public:
    virtual PackDiscoveryError::~PackDiscoveryError();
    virtual void getLocErrorMessageMap[abi:cxx11](void)const;
    virtual void getEventErrorMessageMap[abi:cxx11](void)const;

    PackDiscoveryError(PackDiscoveryError const&);
    PackDiscoveryError(void);
    PackDiscoveryError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&);
};
