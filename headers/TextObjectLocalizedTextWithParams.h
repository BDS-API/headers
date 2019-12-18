#pragma once

class TextObjectLocalizedTextWithParams : ITextObject {

public:
    virtual ~TextObjectLocalizedTextWithParams();
    virtual void asString[abi:cxx11](void)const;
    virtual void asJsonValue(void)const;

    void TextObjectLocalizedTextWithParams(std::string, std::vector<std::string, std::allocator<std::string>> const&);
};
