#pragma once

#include "./ITextObject.h"
#include <string>


class TextObjectText : ITextObject {

public:
    virtual ~TextObjectText();
    virtual std::string asString()const;
    virtual bool asJsonValue()const;

    TextObjectText(std::string);
};
