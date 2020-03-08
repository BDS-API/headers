#pragma once



class PackSettingsError : PackError {

public:
    virtual PackSettingsError::~PackSettingsError()
    virtual void getLocErrorMessage()const;
    virtual void getLocErrorMessageMap()const;
    virtual void getEventErrorMessageMap()const;

    PackSettingsError(PackSettingsError const&);
    PackSettingsError(void);
    PackSettingsError(std::vector<std::string, std::allocator<std::string>> const&);
};
