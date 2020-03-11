#pragma once

#include "./CZString.h"


namespace Json::Value {

class CZString {

public:

    void c_str()const;
    bool isStaticString()const;
    void index()const;
    CZString(unsigned int);
//  CZString(char const*, Json::Value::CZString::DuplicationPolicy); //TODO: incomplete function definition
    CZString(Json::Value::CZString const&);
    ~CZString();
    void swap(Json::Value::CZString &);
    void operator<(Json::Value::CZString const&)const;
    void operator==(Json::Value::CZString const&)const;
};

}