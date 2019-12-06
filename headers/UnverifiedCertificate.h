#pragma once

class UnverifiedCertificate {

public:

    void UnverifiedCertificate(WebToken const&, std::unique_ptr<UnverifiedCertificate, std::default_delete<UnverifiedCertificate>>);
    void UnverifiedCertificate(UnverifiedCertificate&&);
    void UnverifiedCertificate(UnverifiedCertificate const&);
    void fromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addToChain(Json::Value &)const;
    void addToEnd(UnverifiedCertificate const&);
    void verify(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&)const;
};
