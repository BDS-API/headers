#pragma once

#include <string>


class CSHA1 {

public:
    CSHA1(); // _ZN5CSHA1C2Ev
    void Reset(); // _ZN5CSHA15ResetEv
    ~CSHA1(); // _ZN5CSHA1D2Ev
    void Transform(unsigned int *, unsigned char const*); // _ZN5CSHA19TransformEPjPKh
    void Update(unsigned char const*, unsigned int); // _ZN5CSHA16UpdateEPKhj
    void HashFile(char const*); // _ZN5CSHA18HashFileEPKc
    void Final(); // _ZN5CSHA15FinalEv
//  void ReportHash_a(char *, CSHA1::REPORT_TYPE)const; //TODO: incomplete function definition // _ZNK5CSHA112ReportHash_aEPcNS_11REPORT_TYPEE
//  void ReportHash(char *, CSHA1::REPORT_TYPE)const; //TODO: incomplete function definition // _ZNK5CSHA110ReportHashEPcNS_11REPORT_TYPEE
//  void ReportHashStl(std::string &, CSHA1::REPORT_TYPE)const; //TODO: incomplete function definition // _ZNK5CSHA113ReportHashStlERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_11REPORT_TYPEE
    void GetHash(unsigned char *)const; // _ZNK5CSHA17GetHashEPh
    void GetHash()const; // _ZNK5CSHA17GetHashEv
    void HMAC(unsigned char *, int, unsigned char *, int, unsigned char *); // _ZN5CSHA14HMACEPhiS0_iS0_
};
