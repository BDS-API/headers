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

    void operator[](int);
    void clamped()const;
    void operator*(float)const;
    void toABGR()const;
    void distanceFrom(Color const&)const;
    void blueFromARGB(int);
    void operator!=(Color const&)const;
    void fromHexString(std::string const&);
    void lerp(Color const&, Color const&, float);
    void operator*(Color const&)const;
    void greenFromARGB(int);
    void fromHSB(float, float, float);
    void clamp();
    void operator/(float)const;
    void brighter(float)const;
    bool isNil()const;
    Color();
    void fromRGB(int);
    void toARGB()const;
    void fromIntensity(float, float);
    Color(float, float, float, float);
    std::string toHexString()const;
    void operator==(Color const&)const;
    void redFromARGB(int);
    void fromARGB(int);
};
