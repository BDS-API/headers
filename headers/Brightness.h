#pragma once

class Brightness {

public:
    static long MAX;
    static long MIN;
    static long INVALID;


    void Brightness(unsigned char const&);
    void Brightness(Brightness const&);
    void Brightness(void);
};
