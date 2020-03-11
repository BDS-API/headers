#pragma once

#include "./Blob.h"


namespace mce {

class Blob {

public:

    void size()const;
    void cbegin()const;
    void cend()const;
    void begin();
    void get();
    void getSpan();
    void getSpan()const;
    Blob();
    Blob(unsigned long);
    Blob(unsigned char const*, unsigned long);
    ~Blob();
    Blob(mce::Blob &&);
    void end();
    void swap(mce::Blob &);
    void empty()const;
    void data();
    void data()const;
    void get()const;
};

}