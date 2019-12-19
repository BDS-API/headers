#pragma once

class TextObjectLocalizedText : ITextObject {

public:
    virtual TextObjectLocalizedText::~TextObjectLocalizedText();
    virtual void asString[abi:cxx11](void)const;
    virtual void asJsonValue(void)const;

    TextObjectLocalizedText(std::string);
};
