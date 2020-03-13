#pragma once

#include <string>
#include <array>


namespace ColorFormat {

    static std::string ESCAPE;
    static std::string BLACK;
    static std::string DARK_BLUE;
    static std::string DARK_GREEN;
    static std::string DARK_AQUA;
    static std::string DARK_RED;
    static std::string DARK_PURPLE;
    static std::string GOLD;
    static std::string GRAY;
    static std::string DARK_GRAY;
    static std::string BLUE;
    static std::string GREEN;
    static std::string AQUA;
    static std::string RED;
    static std::string LIGHT_PURPLE;
    static std::string YELLOW;
    static std::string WHITE;
    static std::string MINECOIN_GOLD;
    static std::string OBFUSCATED;
    static std::string BOLD;
    static std::string ITALIC;
    static std::string RESET;

    void FromString(std::string const&); // _ZN11ColorFormat10FromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void NameFromFormatCode(std::string const&); // _ZN11ColorFormat18NameFromFormatCodeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void ColorFromChar(char); // _ZN11ColorFormat13ColorFromCharEc
    void ColorFromColorCode(std::string const&); // _ZN11ColorFormat18ColorFromColorCodeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool IsColorCode(char); // _ZN11ColorFormat11IsColorCodeEc
    bool IsColorCode(std::string const&); // _ZN11ColorFormat11IsColorCodeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string ColorCodeFromColor(Color const&); // _ZN11ColorFormat18ColorCodeFromColorB5cxx11ERK5Color
    void setColors(std::array<Color, 17ul> const&); // _ZN11ColorFormat9setColorsERKSt5arrayI5ColorLm17EE
    void getCurrentColors(); // _ZN11ColorFormat16getCurrentColorsEv
};
