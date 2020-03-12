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

    void setColors(std::array<Color, 17ul> const&);
    void NameFromFormatCode(std::string const&);
    void ColorFromChar(char);
    bool IsColorCode(char);
    void getCurrentColors();
    void FromString(std::string const&);
    void ColorFromColorCode(std::string const&);
    std::string ColorCodeFromColor(Color const&);
    bool IsColorCode(std::string const&);
};
