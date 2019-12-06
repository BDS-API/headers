#pragma once

class ThirdPartyInfo {

public:

    void ThirdPartyInfo(ThirdPartyInfo const&);
    void ThirdPartyInfo(void);
    bool isEligible(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    bool isValid(void)const;
    bool isXblRequired(void)const;
};
