#pragma once

#include "ITextObject.h"
#include <string>
#include <vector>


class TextObjectLocalizedTextWithParams : ITextObject {

public:
    virtual std::string asString()const;
    virtual bool asJsonValue()const;
    ~TextObjectLocalizedTextWithParams();
    TextObjectLocalizedTextWithParams(std::string, std::vector<std::string> const&);
};
