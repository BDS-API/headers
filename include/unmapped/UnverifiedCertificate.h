#pragma once

#include <string>
#include <memory>
#include <vector>


class UnverifiedCertificate {

public:
    UnverifiedCertificate(WebToken const&, std::unique_ptr<UnverifiedCertificate>); // _ZN21UnverifiedCertificateC2ERK8WebTokenSt10unique_ptrIS_St14default_deleteIS_EE
    UnverifiedCertificate(UnverifiedCertificate &&); // _ZN21UnverifiedCertificateC2EOS_
    UnverifiedCertificate(UnverifiedCertificate const&); // _ZN21UnverifiedCertificateC2ERKS_
    void fromString(std::string const&); // _ZN21UnverifiedCertificate10fromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string toString()const; // _ZNK21UnverifiedCertificate8toStringB5cxx11Ev
    void addToChain(Json::Value &)const; // _ZNK21UnverifiedCertificate10addToChainERN4Json5ValueE
    void addToEnd(UnverifiedCertificate const&); // _ZN21UnverifiedCertificate8addToEndERKS_
    void verify(std::vector<std::string> const&)const; // _ZNK21UnverifiedCertificate6verifyERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    std::string getIdentityPublicKey()const; // _ZNK21UnverifiedCertificate20getIdentityPublicKeyB5cxx11Ev
    ~UnverifiedCertificate(); // _ZN21UnverifiedCertificateD2Ev
};
