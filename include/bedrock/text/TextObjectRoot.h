#pragma once

#include "./TextObjectRoot.h"
#include <memory>
#include "./ITextObject.h"
#include <string>


class TextObjectRoot : ITextObject {

public:
    virtual ~TextObjectRoot();
    virtual std::string asString()const;
    virtual bool asJsonValue()const;

    TextObjectRoot();
    TextObjectRoot(TextObjectRoot &&);
    void addChild(std::unique_ptr<ITextObject, std::default_delete<ITextObject>>);
    void clear();
    bool isEmpty()const;
};
