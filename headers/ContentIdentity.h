#pragma once

class ContentIdentity {

public:
    static long ContentIdentity::EMPTY;


    void ContentIdentity(mce::UUID const&);
    void _setValidFlag(void);
    void ContentIdentity(void);
    void ContentIdentity(ContentIdentity const&);
    void ContentIdentity(ContentIdentity&&);
    void getAsUUID(void)const;
    void setUUID(mce::UUID const&);
    bool isValid(void)const;
    void fromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
