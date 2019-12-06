#pragma once

class WebToken {

public:

    void WebToken(WebToken const&);
    void getData(void)const;
    void WebToken(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void _parse(Json::Value &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _DERToSignature(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void _DERToBinary(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void verifyWithIncludedKey(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&)const;
    void verifyWithExternalKey(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void createFromData(Json::Value const&, PrivateKeyManager const&);
    void WebToken(void);
};
