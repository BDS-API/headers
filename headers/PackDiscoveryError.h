#pragma once

class PackDiscoveryError : PackError {

public:
    virtual ~PackDiscoveryError();

    void PackDiscoveryError(PackDiscoveryError const&);
    void PackDiscoveryError(void);
    void PackDiscoveryError(PackParseErrorType, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
};
