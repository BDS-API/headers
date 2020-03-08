#pragma once



class TextObjectRoot : ITextObject {

public:
    virtual TextObjectRoot::~TextObjectRoot()
    virtual bool asString()const;
    virtual bool asJsonValue()const;

    TextObjectRoot(void);
    TextObjectRoot(TextObjectRoot&&);
    void addChild(std::unique_ptr<ITextObject, std::default_delete<ITextObject>>);
    void clear();
    bool isEmpty()const;
};
