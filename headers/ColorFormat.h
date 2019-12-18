#pragma once

class ColorFormat {

public:
    static long ColorFormat::ESCAPE[abi:cxx11];
    static long ColorFormat::BLACK[abi:cxx11];
    static long ColorFormat::DARK_BLUE[abi:cxx11];
    static long ColorFormat::DARK_GREEN[abi:cxx11];
    static long ColorFormat::DARK_AQUA[abi:cxx11];
    static long ColorFormat::DARK_RED[abi:cxx11];
    static long ColorFormat::DARK_PURPLE[abi:cxx11];
    static long ColorFormat::GOLD[abi:cxx11];
    static long ColorFormat::GRAY[abi:cxx11];
    static long ColorFormat::DARK_GRAY[abi:cxx11];
    static long ColorFormat::BLUE[abi:cxx11];
    static long ColorFormat::GREEN[abi:cxx11];
    static long ColorFormat::AQUA[abi:cxx11];
    static long ColorFormat::RED[abi:cxx11];
    static long ColorFormat::LIGHT_PURPLE[abi:cxx11];
    static long ColorFormat::YELLOW[abi:cxx11];
    static long ColorFormat::WHITE[abi:cxx11];
    static long ColorFormat::MINECOIN_GOLD[abi:cxx11];
    static long ColorFormat::OBFUSCATED[abi:cxx11];
    static long ColorFormat::BOLD[abi:cxx11];
    static long ColorFormat::ITALIC[abi:cxx11];
    static long ColorFormat::RESET[abi:cxx11];


    void FromString(std::string const&);
    void NameFromFormatCode(std::string const&);
    void ColorFromChar(char);
    void ColorFromColorCode(std::string const&);
    void IsColorCode(char);
    void IsColorCode(std::string const&);
    void setColors(std::array<Color, 17ul> const&);
    void getCurrentColors(void);
};
