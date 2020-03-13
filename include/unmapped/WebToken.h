#pragma once

#include <string>
#include <vector>


class WebToken {

public:
    WebToken(WebToken const&); // _ZN8WebTokenC2ERKS_
    ~WebToken(); // _ZN8WebTokenD2Ev
    void getData()const; // _ZNK8WebToken7getDataEv
    WebToken(std::string); // _ZN8WebTokenC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _parse(Json::Value &, std::string const&); // _ZN8WebToken6_parseERN4Json5ValueERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string _signatureToDER()const; // _ZNK8WebToken15_signatureToDERB5cxx11Ev
    void _DERToSignature(std::string const&, int); // _ZN8WebToken15_DERToSignatureERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _DERToBinary(std::string const&, int); // _ZN8WebToken12_DERToBinaryERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void verifyWithIncludedKey(std::vector<std::string> const&)const; // _ZNK8WebToken21verifyWithIncludedKeyERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    void verifyWithExternalKey(std::string const&)const; // _ZNK8WebToken21verifyWithExternalKeyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void createFromData(Json::Value const&, PrivateKeyManager const&); // _ZN8WebToken14createFromDataERKN4Json5ValueERK17PrivateKeyManager
    std::string getSignerPublicKey()const; // _ZNK8WebToken18getSignerPublicKeyB5cxx11Ev
    std::string getSigningCertificateThumbprint()const; // _ZNK8WebToken31getSigningCertificateThumbprintB5cxx11Ev
    std::string toString()const; // _ZNK8WebToken8toStringB5cxx11Ev
    WebToken(); // _ZN8WebTokenC2Ev
};
