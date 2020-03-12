#pragma once



class Brightness {

public:
    static long MAX;
    static long MIN;
    static long INVALID;

    Brightness(Brightness const&);
    Brightness();
    Brightness(unsigned char const&);
};
