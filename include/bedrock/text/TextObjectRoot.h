#pragma once



class TextObjectRoot : ITextObject {

public:
    virtual TextObjectRoot::~TextObjectRoot();
    virtual bool asString[abi:cxx11](void)const;
    virtual bool asJsonValue(void)const;

    TextObjectRoot(void);
    TextObjectRoot(TextObjectRoot&&);
    void addChild(std::unique_ptr<ITextObject, std::default_delete<ITextObject>>);
    void clear(void);
    bool isEmpty(void)const;
};
