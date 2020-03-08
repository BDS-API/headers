#pragma once



class TextObjectLocalizedTextWithParams : ITextObject {

public:
    virtual TextObjectLocalizedTextWithParams::~TextObjectLocalizedTextWithParams()
    virtual bool asString()const;
    virtual bool asJsonValue()const;

    TextObjectLocalizedTextWithParams(std::string, std::vector<std::string, std::allocator<std::string>> const&);
};
