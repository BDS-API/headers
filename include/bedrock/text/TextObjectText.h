#pragma once



class TextObjectText : ITextObject {

public:
    virtual TextObjectText::~TextObjectText();
    virtual bool asString[abi:cxx11](void)const;
    virtual bool asJsonValue(void)const;

    TextObjectText(std::string);
};
