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

    void toARGB()const;
    void fromHexString(std::string const&);
    void brighter(float)const;
    void operator==(Color const&)const;
    void redFromARGB(int);
    Color();
    void operator[](int);
    Color(float, float, float, float);
    void lerp(Color const&, Color const&, float);
    void operator*(Color const&)const;
    void clamp();
    void fromRGB(int);
    void fromARGB(int);
    void clamped()const;
    void greenFromARGB(int);
    std::string toHexString()const;
    void toABGR()const;
    void fromIntensity(float, float);
    bool isNil()const;
    void fromHSB(float, float, float);
    void operator!=(Color const&)const;
    void operator*(float)const;
    void distanceFrom(Color const&)const;
    void operator/(float)const;
    void blueFromARGB(int);
};
