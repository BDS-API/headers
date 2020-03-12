#pragma once

#include "ITextObject.h"
#include <string>


class TextObjectLocalizedText : ITextObject {

public:
    virtual bool asJsonValue()const;
    virtual std::string asString()const;
    ~TextObjectLocalizedText();
    TextObjectLocalizedText(std::string);
};
