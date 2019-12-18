#pragma once

class PackLoadError : PackError {

public:
    virtual ~PackLoadError();
    virtual void getLocErrorMessageMap[abi:cxx11](void)const;
    virtual void getEventErrorMessageMap[abi:cxx11](void)const;

    void PackLoadError(void);
    void PackLoadError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&);
    void PackLoadError(PackLoadError const&);
};
