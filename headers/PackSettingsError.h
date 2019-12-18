#pragma once

class PackSettingsError : PackError {

public:
    virtual ~PackSettingsError();
    virtual void getLocErrorMessage[abi:cxx11](void)const;
    virtual void getLocErrorMessageMap[abi:cxx11](void)const;
    virtual void getEventErrorMessageMap[abi:cxx11](void)const;

    void PackSettingsError(PackSettingsError const&);
    void PackSettingsError(void);
    void PackSettingsError(std::vector<std::string, std::allocator<std::string>> const&);
};
