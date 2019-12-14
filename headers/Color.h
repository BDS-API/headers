#pragma once

class Color {

public:
    static long Color::WHITE;
    static long Color::GREY;
    static long Color::BLACK;
    static long Color::RED;
    static long Color::GREEN;
    static long Color::BLUE;
    static long Color::YELLOW;
    static long Color::ORANGE;
    static long Color::PURPLE;
    static long Color::CYAN;
    static long Color::PINK;
    static long Color::NIL;
    static long Color::SHADE_DOWN;
    static long Color::SHADE_UP;
    static long Color::SHADE_NORTH_SOUTH;
    static long Color::SHADE_WEST_EAST;
    static long Color::MINECOIN_GOLD;


    void Color(float, float, float, float);
    void fromARGB(int);
    void Color(void);
    void fromRGB(int);
    void clamped(void)const;
    void clamp(void);
    void brighter(float)const;
    bool isNil(void)const;
    void fromHexString(std::string const&);
    void lerp(Color const&, Color const&, float);
    void redFromARGB(int);
    void greenFromARGB(int);
    void blueFromARGB(int);
    void fromIntensity(float, float);
    void distanceFrom(Color const&)const;
    void fromHSB(float, float, float);
    void toARGB(void)const;
    void toABGR(void)const;
};
