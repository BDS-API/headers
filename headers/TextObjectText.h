#pragma once

class TextObjectText : ITextObject {

public:
    virtual ~TextObjectText();
    virtual void asJsonValue(void)const;

    void TextObjectText(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
};
