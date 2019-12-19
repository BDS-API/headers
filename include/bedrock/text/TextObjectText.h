#pragma once

class TextObjectText : ITextObject {

public:
    virtual TextObjectText::~TextObjectText();
    virtual void asString[abi:cxx11](void)const;
    virtual void asJsonValue(void)const;

    TextObjectText(std::string);
};
