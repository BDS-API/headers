#pragma once

using namespace Json;

class StaticString {

public:

    StaticString(char const*);
    void c_str(void)const;
};
