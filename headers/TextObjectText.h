#pragma once

class TextObjectText : ITextObject {

public:
    virtual ~TextObjectText();
    virtual void asJsonValue(void)const;

    void TextObjectText(std::string);
};
