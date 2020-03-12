#pragma once

#include <vector>
#include "ITextObject.h"
#include <string>


class TextObjectLocalizedTextWithParams : ITextObject {

public:
    virtual bool asJsonValue()const;
    ~TextObjectLocalizedTextWithParams();
    virtual std::string asString()const;
    TextObjectLocalizedTextWithParams(std::string, std::vector<std::string> const&);
};
