#pragma once

#include "ITextObject.h"
#include <string>


class TextObjectText : ITextObject {

public:
    virtual bool asJsonValue()const;
    ~TextObjectText();
    virtual std::string asString()const;
    TextObjectText(std::string);
};
