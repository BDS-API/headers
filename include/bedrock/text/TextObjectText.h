#pragma once

#include "ITextObject.h"
#include <string>


class TextObjectText : ITextObject {

public:
    ~TextObjectText();
    virtual bool asJsonValue()const;
    virtual std::string asString()const;
    TextObjectText(std::string);
};
