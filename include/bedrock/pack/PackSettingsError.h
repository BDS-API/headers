#pragma once

class PackSettingsError : PackError {

public:
    virtual PackSettingsError::~PackSettingsError();
    virtual void getLocErrorMessage[abi:cxx11](void)const;
    virtual void getLocErrorMessageMap[abi:cxx11](void)const;
    virtual void getEventErrorMessageMap[abi:cxx11](void)const;

    PackSettingsError(PackSettingsError const&);
    PackSettingsError(void);
    PackSettingsError(std::vector<std::string, std::allocator<std::string>> const&);
};
