#pragma once



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


    Color(float, float, float, float);
    void fromARGB(int);
    Color(void);
    void fromRGB(int);
    void clamped()const;
    void clamp();
    void brighter(float)const;
    bool isNil()const;
    void fromHexString(std::string const&);
    void lerp(Color const&, Color const&, float);
    void redFromARGB(int);
    void greenFromARGB(int);
    void blueFromARGB(int);
    void fromIntensity(float, float);
    void distanceFrom(Color const&)const;
    void fromHSB(float, float, float);
    void toARGB()const;
    void toABGR()const;
};
