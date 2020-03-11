#pragma once



namespace Json {

class StaticString {

public:

    StaticString(char const*);
    void c_str()const;
};

}