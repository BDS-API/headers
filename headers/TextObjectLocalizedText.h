#pragma once

class TextObjectLocalizedText : ITextObject {

public:
    virtual ~TextObjectLocalizedText();
    virtual void asString[abi:cxx11](void)const;
    virtual void asJsonValue(void)const;

    void TextObjectLocalizedText(std::string);
};
