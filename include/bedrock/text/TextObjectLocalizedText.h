#pragma once

#include "./ITextObject.h"
#include <string>


class TextObjectLocalizedText : ITextObject {

public:
    virtual ~TextObjectLocalizedText();
    virtual std::string asString()const;
    virtual bool asJsonValue()const;

    TextObjectLocalizedText(std::string);
};
