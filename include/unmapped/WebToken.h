#pragma once

#include "../json/Value"


class WebToken {

public:

    WebToken(WebToken const&);
    void getData()const;
    WebToken(std::string);
    void _parse(Json::Value &, std::string const&);
    void _DERToSignature(std::string const&, int);
    void _DERToBinary(std::string const&, int);
    void verifyWithIncludedKey(std::vector<std::string, std::allocator<std::string>> const&)const;
    void verifyWithExternalKey(std::string const&)const;
    void createFromData(Json::Value const&, PrivateKeyManager const&);
    WebToken(void);
};
