#pragma once

class TextObjectLocalizedTextWithParams : ITextObject {

public:
    virtual ~TextObjectLocalizedTextWithParams();
    virtual void asJsonValue(void)const;

    void TextObjectLocalizedTextWithParams(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
};
