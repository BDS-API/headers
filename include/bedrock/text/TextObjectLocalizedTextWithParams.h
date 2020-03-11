#pragma once

#include <memory>
#include "./ITextObject.h"
#include <vector>
#include <string>


class TextObjectLocalizedTextWithParams : ITextObject {

public:
    virtual ~TextObjectLocalizedTextWithParams();
    virtual std::string asString()const;
    virtual bool asJsonValue()const;

    TextObjectLocalizedTextWithParams(std::string, std::vector<std::string, std::allocator<std::string>> const&);
};
