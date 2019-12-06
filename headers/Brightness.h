#pragma once

class Brightness {

public:
    static long Brightness::MAX;
    static long Brightness::MIN;
    static long Brightness::INVALID;


    void Brightness(unsigned char const&);
    void Brightness(Brightness const&);
    void Brightness(void);
};
