#pragma once

#include "ITextObject.h"
#include <memory>
#include <string>


class TextObjectRoot : ITextObject {

public:
    ~TextObjectRoot();
    virtual bool asJsonValue()const;
    virtual std::string asString()const;
    TextObjectRoot(TextObjectRoot &&);
    void addChild(std::unique_ptr<ITextObject>);
    void clear();
    bool isEmpty()const;
    TextObjectRoot();
};
