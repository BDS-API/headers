#pragma once

#include "./StringSpan.h"


namespace Core {

class StringSpan {

public:

//  StringSpan(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void size()const;
    StringSpan(char const*, unsigned long);
    void find(Core::StringSpan)const;
    void find(char const*, unsigned long)const;
    void rfind(char)const;
    void find_last_of(char const*)const;
    void find_first_of(char const*)const;
    void substr(unsigned long)const;
    void substr(unsigned long, unsigned long)const;
    void data()const;
    void length()const;
};

}