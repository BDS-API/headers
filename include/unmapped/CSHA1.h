#pragma once

#include <string>


class CSHA1 {

public:
    void Final();
//  void ReportHash_a(char *, CSHA1::REPORT_TYPE)const; //TODO: incomplete function definition
    void Transform(unsigned int *, unsigned char const*);
    void GetHash(unsigned char *)const;
    void GetHash()const;
    void Update(unsigned char const*, unsigned int);
    void HashFile(char const*);
    void Reset();
    ~CSHA1();
    void HMAC(unsigned char *, int, unsigned char *, int, unsigned char *);
//  void ReportHashStl(std::string &, CSHA1::REPORT_TYPE)const; //TODO: incomplete function definition
//  void ReportHash(char *, CSHA1::REPORT_TYPE)const; //TODO: incomplete function definition
    CSHA1();
};
