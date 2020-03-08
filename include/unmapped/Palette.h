#pragma once



class Palette {

public:
    static long WHITE;
    static long ORANGE;
    static long MAGENTA;
    static long LIGHT_BLUE;
    static long YELLOW;
    static long LIGHT_GREEN;
    static long PINK;
    static long GRAY;
    static long SILVER;
    static long CYAN;
    static long PURPLE;
    static long BLUE;
    static long BROWN;
    static long GREEN;
    static long RED;
    static long BLACK;


    void getColor(PaletteColor);
    void fromByte(unsigned char);
};
