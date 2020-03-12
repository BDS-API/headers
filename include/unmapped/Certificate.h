#pragma once

#include "PrivateKeyManager.h"
#include "UnverifiedCertificate.h"
#include <string>
#include "../json/Value.h"
#include <memory>


class Certificate {

public:
    bool isCertificateAuthority()const;
    Certificate(UnverifiedCertificate const&, std::unique_ptr<Certificate>);
    void createWrappedCertificate(PrivateKeyManager &, long, long, std::string const&, bool, Json::Value const*, std::unique_ptr<Certificate>);
    std::string toString()const;
    Certificate(Certificate &&);
    void addToEnd(Certificate const&);
    bool isValid()const;
    void validate(long);
    void getNotBeforeDate()const;
    void getData(std::string const&, Json::Value const&)const;
    Certificate(Certificate const&);
    std::string getIdentityPublicKey()const;
    ~Certificate();
    void getExpirationDate()const;
    void getExtraData(std::string const&, Json::Value const&)const;
    void createWebToken(PrivateKeyManager &, long, long, std::string const&, bool, Json::Value const*);
    void getRootParentCertificate();
    std::string getSignerPublicKey()const;
    void addAuthorityToCertificate(PrivateKeyManager &, long, long, std::string const&, std::unique_ptr<Certificate>);
    void getParentCertificate()const;
};
