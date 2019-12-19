#pragma once

using namespace mce;

class Blob {

public:

    void size(void)const;
    void cbegin(void)const;
    void cend(void)const;
    void begin(void);
    void get(void);
    void getSpan(void);
    void getSpan(void)const;
    Blob(void);
    Blob(unsigned long);
    Blob(unsigned char const*, unsigned long);
    Blob(mce::Blob&&);
    void end(void);
    void swap(mce::Blob&);
    void empty(void)const;
    void data(void);
    void data(void)const;
    void get(void)const;
};
