#pragma once



class Brightness {

public:
    static long MAX;
    static long MIN;
    static long INVALID;


    Brightness(unsigned char const&);
    Brightness(Brightness const&);
    Brightness(void);
};
