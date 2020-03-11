#pragma once

#include "./Certificate.h"
#include "../json/Value.h"
#include <memory>
#include "./UnverifiedCertificate.h"
#include "./PrivateKeyManager.h"
#include <string>


class Certificate {

public:

    bool isCertificateAuthority()const;
    std::string getIdentityPublicKey()const;
    void addAuthorityToCertificate(PrivateKeyManager &, long, long, std::string const&, std::unique_ptr<Certificate, std::default_delete<Certificate>>);
    void createWebToken(PrivateKeyManager &, long, long, std::string const&, bool, Json::Value const*);
    void addToEnd(Certificate const&);
    void createWrappedCertificate(PrivateKeyManager &, long, long, std::string const&, bool, Json::Value const*, std::unique_ptr<Certificate, std::default_delete<Certificate>>);
    Certificate(Certificate &&);
    Certificate(Certificate const&);
    Certificate(UnverifiedCertificate const&, std::unique_ptr<Certificate, std::default_delete<Certificate>>);
    std::string toString()const;
    void validate(long);
    void getNotBeforeDate()const;
    void getExpirationDate()const;
    void getData(std::string const&, Json::Value const&)const;
    void getExtraData(std::string const&, Json::Value const&)const;
    void getParentCertificate()const;
    void getRootParentCertificate();
    bool isValid()const;
    std::string getSignerPublicKey()const;
    ~Certificate();
};
