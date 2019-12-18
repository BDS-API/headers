#pragma once

class TextObjectText : ITextObject {

public:
    virtual ~TextObjectText();
    virtual void asString[abi:cxx11](void)const;
    virtual void asJsonValue(void)const;

    void TextObjectText(std::string);
};
