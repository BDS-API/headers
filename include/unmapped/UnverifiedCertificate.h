#pragma once

#include <string>
#include "../json/Value.h"
#include <vector>
#include <memory>
#include "WebToken.h"


class UnverifiedCertificate {

public:
    std::string getIdentityPublicKey()const;
    void fromString(std::string const&);
    std::string toString()const;
    void addToChain(Json::Value &)const;
    void addToEnd(UnverifiedCertificate const&);
    UnverifiedCertificate(UnverifiedCertificate &&);
    void verify(std::vector<std::string> const&)const;
    ~UnverifiedCertificate();
    UnverifiedCertificate(WebToken const&, std::unique_ptr<UnverifiedCertificate>);
    UnverifiedCertificate(UnverifiedCertificate const&);
};
