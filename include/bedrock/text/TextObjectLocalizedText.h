#pragma once



class TextObjectLocalizedText : ITextObject {

public:
    virtual TextObjectLocalizedText::~TextObjectLocalizedText()
    virtual bool asString()const;
    virtual bool asJsonValue()const;

    TextObjectLocalizedText(std::string);
};
