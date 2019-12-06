#pragma once

class Palette {

public:
    static long Palette::WHITE;
    static long Palette::ORANGE;
    static long Palette::MAGENTA;
    static long Palette::LIGHT_BLUE;
    static long Palette::YELLOW;
    static long Palette::LIGHT_GREEN;
    static long Palette::PINK;
    static long Palette::GRAY;
    static long Palette::SILVER;
    static long Palette::CYAN;
    static long Palette::PURPLE;
    static long Palette::BLUE;
    static long Palette::BROWN;
    static long Palette::GREEN;
    static long Palette::RED;
    static long Palette::BLACK;


    void getColor(PaletteColor);
    void fromByte(unsigned char);
};
