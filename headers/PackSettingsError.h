#pragma once

class PackSettingsError : PackError {

public:
    virtual ~PackSettingsError();

    void PackSettingsError(PackSettingsError const&);
    void PackSettingsError(void);
    void PackSettingsError(std::vector<std::string, std::allocator<std::string>> const&);
};
