#pragma once

class ColorFormat {

public:

    void FromString(std::string const&);
    void NameFromFormatCode(std::string const&);
    void ColorFromChar(char);
    void ColorFromColorCode(std::string const&);
    void IsColorCode(char);
    void IsColorCode(std::string const&);
    void setColors(std::array<Color, 17ul> const&);
    void getCurrentColors(void);
};
