#pragma once

class PackLoadError : PackError {

public:
    virtual ~PackLoadError();

    void PackLoadError(void);
    void PackLoadError(PackParseErrorType, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void PackLoadError(PackLoadError const&);
};
