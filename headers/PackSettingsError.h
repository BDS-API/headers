#pragma once

class PackSettingsError : PackError {

public:
    virtual ~PackSettingsError();

    void PackSettingsError(PackSettingsError const&);
    void PackSettingsError(void);
    void PackSettingsError(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
};
