#pragma once

class TextObjectLocalizedText : ITextObject {

public:
    virtual ~TextObjectLocalizedText();
    virtual void asJsonValue(void)const;

    void TextObjectLocalizedText(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
};
