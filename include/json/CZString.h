#pragma once



using namespace Json::Value;

class CZString {

public:

    void c_str()const;
    bool isStaticString()const;
    void index()const;
    CZString(unsigned int);
    CZString(char const*, Json::Value::CZString::DuplicationPolicy);
    CZString(Json::Value::CZString const&);
    void swap(Json::Value::CZString&);
};
