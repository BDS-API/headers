#pragma once

class Certificate {

public:

    bool isCertificateAuthority(void)const;
    void addAuthorityToCertificate(PrivateKeyManager &, long, long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::unique_ptr<Certificate, std::default_delete<Certificate>>);
    void createWebToken(PrivateKeyManager &, long, long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, Json::Value const*);
    void addToEnd(Certificate const&);
    void createWrappedCertificate(PrivateKeyManager &, long, long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, Json::Value const*, std::unique_ptr<Certificate, std::default_delete<Certificate>>);
    void Certificate(Certificate&&);
    void Certificate(Certificate const&);
    void Certificate(UnverifiedCertificate const&, std::unique_ptr<Certificate, std::default_delete<Certificate>>);
    void validate(long);
    void getNotBeforeDate(void)const;
    void getExpirationDate(void)const;
    void getData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&)const;
    void getExtraData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&)const;
    void getParentCertificate(void)const;
    void getRootParentCertificate(void);
    bool isValid(void)const;
};
