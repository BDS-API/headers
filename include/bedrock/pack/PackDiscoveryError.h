#pragma once



class PackDiscoveryError : PackError {

public:
    PackDiscoveryError::~PackDiscoveryError()
    virtual void getLocErrorMessageMap()const;
    virtual void getEventErrorMessageMap()const;

    PackDiscoveryError(PackDiscoveryError const&);
    PackDiscoveryError(void);
    PackDiscoveryError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&);
};
