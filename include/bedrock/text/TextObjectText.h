#pragma once



class TextObjectText : ITextObject {

public:
    virtual TextObjectText::~TextObjectText()
    virtual bool asString()const;
    virtual bool asJsonValue()const;

    TextObjectText(std::string);
};
