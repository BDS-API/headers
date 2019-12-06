#pragma once

class ColorFormat {

public:

    void FromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void NameFromFormatCode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ColorFromChar(char);
    void ColorFromColorCode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void IsColorCode(char);
    void IsColorCode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setColors(std::array<Color, 17ul> const&);
    void getCurrentColors(void);
};
