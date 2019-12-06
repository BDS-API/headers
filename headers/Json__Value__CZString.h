#pragma once

class Json::Value::CZString {

public:

    void c_str(void)const;
    bool isStaticString(void)const;
    void index(void)const;
    void CZString(unsigned int);
    void CZString(char const*, Json::Value::CZString::DuplicationPolicy);
    void CZString(Json::Value::CZString const&);
    void swap(Json::Value::CZString&);
};
