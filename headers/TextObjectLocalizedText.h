#pragma once

class TextObjectLocalizedText : ITextObject {

public:
    virtual ~TextObjectLocalizedText();
    virtual void asJsonValue(void)const;

    void TextObjectLocalizedText(std::string);
};
