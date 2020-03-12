#pragma once

#include <string>
#include <array>
#include "../bedrock/util/Color.h"


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

    void FromString(std::string const&);
    bool IsColorCode(std::string const&);
    void ColorFromColorCode(std::string const&);
    void ColorFromChar(char);
    void getCurrentColors();
    void NameFromFormatCode(std::string const&);
    bool IsColorCode(char);
    std::string ColorCodeFromColor(Color const&);
//  void setColors(std::array<Color, 17ul> const&); //TODO: incomplete function definition
};
