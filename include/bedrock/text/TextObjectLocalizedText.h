#pragma once



class TextObjectLocalizedText : ITextObject {

public:
    virtual TextObjectLocalizedText::~TextObjectLocalizedText();
    virtual bool asString[abi:cxx11](void)const;
    virtual bool asJsonValue(void)const;

    TextObjectLocalizedText(std::string);
};
