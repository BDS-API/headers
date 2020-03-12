#pragma once

#include <string>
#include <memory>
#include <vector>


class UnverifiedCertificate {

public:
    ~UnverifiedCertificate();
    void addToEnd(UnverifiedCertificate const&);
    void fromString(std::string const&);
    UnverifiedCertificate(UnverifiedCertificate const&);
    std::string getIdentityPublicKey()const;
    UnverifiedCertificate(UnverifiedCertificate &&);
    void verify(std::vector<std::string> const&)const;
    std::string toString()const;
    UnverifiedCertificate(WebToken const&, std::unique_ptr<UnverifiedCertificate>);
    void addToChain(Json::Value &)const;
};
