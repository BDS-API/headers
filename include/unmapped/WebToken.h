#pragma once

#include "PrivateKeyManager.h"
#include <vector>
#include <string>
#include "../json/Value.h"


class WebToken {

public:
    void getData()const;
    ~WebToken();
    std::string toString()const;
    WebToken();
    void createFromData(Json::Value const&, PrivateKeyManager const&);
    void verifyWithExternalKey(std::string const&)const;
    WebToken(WebToken const&);
    void _parse(Json::Value &, std::string const&);
    void _DERToBinary(std::string const&, int);
    std::string getSigningCertificateThumbprint()const;
    std::string _signatureToDER()const;
    void _DERToSignature(std::string const&, int);
    void verifyWithIncludedKey(std::vector<std::string> const&)const;
    WebToken(std::string);
    std::string getSignerPublicKey()const;
};
