#pragma once

#include <string>
#include <memory>


class Certificate {

public:
    bool isCertificateAuthority()const; // _ZNK11Certificate22isCertificateAuthorityEv
    std::string getIdentityPublicKey()const; // _ZNK11Certificate20getIdentityPublicKeyB5cxx11Ev
    void addAuthorityToCertificate(PrivateKeyManager &, long, long, std::string const&, std::unique_ptr<Certificate>); // _ZN11Certificate25addAuthorityToCertificateER17PrivateKeyManagerllRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrIS_St14default_deleteIS_EE
    void createWebToken(PrivateKeyManager &, long, long, std::string const&, bool, Json::Value const*); // _ZN11Certificate14createWebTokenER17PrivateKeyManagerllRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbPKN4Json5ValueE
    void addToEnd(Certificate const&); // _ZN11Certificate8addToEndERKS_
    void createWrappedCertificate(PrivateKeyManager &, long, long, std::string const&, bool, Json::Value const*, std::unique_ptr<Certificate>); // _ZN11Certificate24createWrappedCertificateER17PrivateKeyManagerllRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbPKN4Json5ValueESt10unique_ptrIS_St14default_deleteIS_EE
    Certificate(Certificate &&); // _ZN11CertificateC2EOS_
    Certificate(Certificate const&); // _ZN11CertificateC2ERKS_
    Certificate(UnverifiedCertificate const&, std::unique_ptr<Certificate>); // _ZN11CertificateC2ERK21UnverifiedCertificateSt10unique_ptrIS_St14default_deleteIS_EE
    std::string toString()const; // _ZNK11Certificate8toStringB5cxx11Ev
    void validate(long); // _ZN11Certificate8validateEl
    void getNotBeforeDate()const; // _ZNK11Certificate16getNotBeforeDateEv
    void getExpirationDate()const; // _ZNK11Certificate17getExpirationDateEv
    void getData(std::string const&, Json::Value const&)const; // _ZNK11Certificate7getDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
    void getExtraData(std::string const&, Json::Value const&)const; // _ZNK11Certificate12getExtraDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
    void getParentCertificate()const; // _ZNK11Certificate20getParentCertificateEv
    void getRootParentCertificate(); // _ZN11Certificate24getRootParentCertificateEv
    bool isValid()const; // _ZNK11Certificate7isValidEv
    std::string getSignerPublicKey()const; // _ZNK11Certificate18getSignerPublicKeyB5cxx11Ev
    ~Certificate(); // _ZN11CertificateD2Ev
};
