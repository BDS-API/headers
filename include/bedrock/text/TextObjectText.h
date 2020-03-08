#pragma once



class TextObjectText : ITextObject {

public:
    TextObjectText::~TextObjectText()
    virtual bool asString()const;
    virtual bool asJsonValue()const;

    TextObjectText(std::string);
};
