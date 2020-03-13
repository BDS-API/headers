#pragma once

#include <string>


class Color {

public:
    static long WHITE;
    static long GREY;
    static long BLACK;
    static long RED;
    static long GREEN;
    static long BLUE;
    static long YELLOW;
    static long ORANGE;
    static long PURPLE;
    static long CYAN;
    static long PINK;
    static long NIL;
    static long SHADE_DOWN;
    static long SHADE_UP;
    static long SHADE_NORTH_SOUTH;
    static long SHADE_WEST_EAST;
    static long MINECOIN_GOLD;

    Color(float, float, float, float); // _ZN5ColorC2Effff
    void fromARGB(int); // _ZN5Color8fromARGBEi
    Color(); // _ZN5ColorC2Ev
    void fromRGB(int); // _ZN5Color7fromRGBEi
    void operator/(float)const; // _ZNK5ColordvEf
    void clamped()const; // _ZNK5Color7clampedEv
    void clamp(); // _ZN5Color5clampEv
    void operator!=(Color const&)const; // _ZNK5ColorneERKS_
    void operator*(float)const; // _ZNK5ColormlEf
    void brighter(float)const; // _ZNK5Color8brighterEf
    void operator*(Color const&)const; // _ZNK5ColormlERKS_
    bool isNil()const; // _ZNK5Color5isNilEv
    void fromHexString(std::string const&); // _ZN5Color13fromHexStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void operator[](int); // _ZN5ColorixEi
    void lerp(Color const&, Color const&, float); // _ZN5Color4lerpERKS_S1_f
    void redFromARGB(int); // _ZN5Color11redFromARGBEi
    void greenFromARGB(int); // _ZN5Color13greenFromARGBEi
    void blueFromARGB(int); // _ZN5Color12blueFromARGBEi
    void fromIntensity(float, float); // _ZN5Color13fromIntensityEff
    void distanceFrom(Color const&)const; // _ZNK5Color12distanceFromERKS_
    void fromHSB(float, float, float); // _ZN5Color7fromHSBEfff
    void toARGB()const; // _ZNK5Color6toARGBEv
    void toABGR()const; // _ZNK5Color6toABGREv
    std::string toHexString()const; // _ZNK5Color11toHexStringB5cxx11Ev
    void operator==(Color const&)const; // _ZNK5ColoreqERKS_
};
