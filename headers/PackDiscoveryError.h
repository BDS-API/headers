#pragma once

class PackDiscoveryError : PackError {

public:
    virtual ~PackDiscoveryError();
    virtual void getLocErrorMessageMap[abi:cxx11](void)const;
    virtual void getEventErrorMessageMap[abi:cxx11](void)const;

    void PackDiscoveryError(PackDiscoveryError const&);
    void PackDiscoveryError(void);
    void PackDiscoveryError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&);
};
