#pragma once

#include <string>


class ITextObject {

public:
    static std::string RAW_TEXT_OBJECT_KEY;
    static std::string RAW_TEXT_TEXT_KEY;
    static std::string RAW_TEXT_TRANSLATE_KEY;
    static std::string RAW_TEXT_WITH_KEY;

    ~ITextObject();
    ITextObject();
    ITextObject(ITextObject const&);
};
