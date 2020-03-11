#pragma once

#include "../json/Value.h"
#include <memory>
#include "./PrivateKeyManager.h"
#include <vector>
#include "./WebToken.h"
#include <string>


class WebToken {

public:

    WebToken(WebToken const&);
    ~WebToken();
    void getData()const;
    WebToken(std::string);
    void _parse(Json::Value &, std::string const&);
    std::string _signatureToDER()const;
    void _DERToSignature(std::string const&, int);
    void _DERToBinary(std::string const&, int);
    void verifyWithIncludedKey(std::vector<std::string, std::allocator<std::string>> const&)const;
    void verifyWithExternalKey(std::string const&)const;
    void createFromData(Json::Value const&, PrivateKeyManager const&);
    std::string getSignerPublicKey()const;
    std::string getSigningCertificateThumbprint()const;
    std::string toString()const;
    WebToken();
};
