#pragma once

#include "../bedrock/util/Color"


class ColorFormat {

public:
    static long ESCAPE[abi:cxx11];
    static long BLACK[abi:cxx11];
    static long DARK_BLUE[abi:cxx11];
    static long DARK_GREEN[abi:cxx11];
    static long DARK_AQUA[abi:cxx11];
    static long DARK_RED[abi:cxx11];
    static long DARK_PURPLE[abi:cxx11];
    static long GOLD[abi:cxx11];
    static long GRAY[abi:cxx11];
    static long DARK_GRAY[abi:cxx11];
    static long BLUE[abi:cxx11];
    static long GREEN[abi:cxx11];
    static long AQUA[abi:cxx11];
    static long RED[abi:cxx11];
    static long LIGHT_PURPLE[abi:cxx11];
    static long YELLOW[abi:cxx11];
    static long WHITE[abi:cxx11];
    static long MINECOIN_GOLD[abi:cxx11];
    static long OBFUSCATED[abi:cxx11];
    static long BOLD[abi:cxx11];
    static long ITALIC[abi:cxx11];
    static long RESET[abi:cxx11];


    void FromString(std::string const&);
    void NameFromFormatCode(std::string const&);
    void ColorFromChar(char);
    void ColorFromColorCode(std::string const&);
    void IsColorCode(char);
    void IsColorCode(std::string const&);
    void setColors(std::array<Color, 17ul> const&);
    void getCurrentColors();
};
