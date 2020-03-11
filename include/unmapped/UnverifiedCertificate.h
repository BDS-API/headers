#pragma once

#include "../json/Value.h"
#include <memory>
#include "./UnverifiedCertificate.h"
#include <vector>
#include "./WebToken.h"
#include <string>


class UnverifiedCertificate {

public:

    UnverifiedCertificate(WebToken const&, std::unique_ptr<UnverifiedCertificate, std::default_delete<UnverifiedCertificate>>);
    UnverifiedCertificate(UnverifiedCertificate &&);
    UnverifiedCertificate(UnverifiedCertificate const&);
    void fromString(std::string const&);
    std::string toString()const;
    void addToChain(Json::Value &)const;
    void addToEnd(UnverifiedCertificate const&);
    void verify(std::vector<std::string, std::allocator<std::string>> const&)const;
    std::string getIdentityPublicKey()const;
    ~UnverifiedCertificate();
};
