#pragma once



class ITextObject {

public:
    static long RAW_TEXT_OBJECT_KEY[abi:cxx11];
    static long RAW_TEXT_TEXT_KEY[abi:cxx11];
    static long RAW_TEXT_TRANSLATE_KEY[abi:cxx11];
    static long RAW_TEXT_WITH_KEY[abi:cxx11];

    virtual ITextObject::~ITextObject()

    ITextObject(void);
    ITextObject(ITextObject const&);
};
