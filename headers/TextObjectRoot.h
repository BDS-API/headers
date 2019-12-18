#pragma once

class TextObjectRoot : ITextObject {

public:
    virtual ~TextObjectRoot();
    virtual void asString[abi:cxx11](void)const;
    virtual void asJsonValue(void)const;

    void TextObjectRoot(void);
    void TextObjectRoot(TextObjectRoot&&);
    void addChild(std::unique_ptr<ITextObject, std::default_delete<ITextObject>>);
    void clear(void);
    bool isEmpty(void)const;
};
