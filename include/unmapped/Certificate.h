#pragma once

#include <memory>
#include <string>


class Certificate {

public:
    std::string toString()const;
    void getData(std::string const&, Json::Value const&)const;
    void getParentCertificate()const;
    void createWrappedCertificate(PrivateKeyManager &, long, long, std::string const&, bool, Json::Value const*, std::unique_ptr<Certificate>);
    void addAuthorityToCertificate(PrivateKeyManager &, long, long, std::string const&, std::unique_ptr<Certificate>);
    std::string getIdentityPublicKey()const;
    void getExtraData(std::string const&, Json::Value const&)const;
    Certificate(UnverifiedCertificate const&, std::unique_ptr<Certificate>);
    bool isCertificateAuthority()const;
    bool isValid()const;
    Certificate(Certificate const&);
    void getRootParentCertificate();
    void validate(long);
    void getNotBeforeDate()const;
    void getExpirationDate()const;
    std::string getSignerPublicKey()const;
    Certificate(Certificate &&);
    void addToEnd(Certificate const&);
    ~Certificate();
    void createWebToken(PrivateKeyManager &, long, long, std::string const&, bool, Json::Value const*);
};
