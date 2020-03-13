#pragma once



class Brightness {

public:
    static long MAX;
    static long MIN;
    static long INVALID;

    Brightness(unsigned char const&); // _ZN10BrightnessC2ERKh
    Brightness(Brightness const&); // _ZN10BrightnessC2ERKS_
    Brightness(); // _ZN10BrightnessC2Ev
};
