#pragma once

class PackLoadError : PackError {

public:
    virtual PackLoadError::~PackLoadError();
    virtual void getLocErrorMessageMap[abi:cxx11](void)const;
    virtual void getEventErrorMessageMap[abi:cxx11](void)const;

    PackLoadError(void);
    PackLoadError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&);
    PackLoadError(PackLoadError const&);
};
