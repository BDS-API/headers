#pragma once

class UnverifiedCertificate {

public:

    void UnverifiedCertificate(WebToken const&, std::unique_ptr<UnverifiedCertificate, std::default_delete<UnverifiedCertificate>>);
    void UnverifiedCertificate(UnverifiedCertificate&&);
    void UnverifiedCertificate(UnverifiedCertificate const&);
    void fromString(std::string const&);
    void addToChain(Json::Value &)const;
    void addToEnd(UnverifiedCertificate const&);
    void verify(std::vector<std::string, std::allocator<std::string>> const&)const;
};
