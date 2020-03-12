#pragma once

#include <string>
#include <vector>


class WebToken {

public:
    void getData()const;
    void _DERToSignature(std::string const&, int);
    void verifyWithExternalKey(std::string const&)const;
    ~WebToken();
    std::string _signatureToDER()const;
    void createFromData(Json::Value const&, PrivateKeyManager const&);
    void _parse(Json::Value &, std::string const&);
    WebToken(WebToken const&);
    std::string toString()const;
    void _DERToBinary(std::string const&, int);
    std::string getSignerPublicKey()const;
    std::string getSigningCertificateThumbprint()const;
    void verifyWithIncludedKey(std::vector<std::string> const&)const;
    WebToken(std::string);
    WebToken();
};
