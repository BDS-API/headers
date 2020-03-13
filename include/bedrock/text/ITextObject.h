#pragma once



class ITextObject {

public:
    static std::string RAW_TEXT_OBJECT_KEY;
    static std::string RAW_TEXT_TEXT_KEY;
    static std::string RAW_TEXT_TRANSLATE_KEY;
    static std::string RAW_TEXT_WITH_KEY;

    ~ITextObject(); // _ZN11ITextObjectD2Ev
    ITextObject(); // _ZN11ITextObjectC2Ev
    ITextObject(ITextObject const&); // _ZN11ITextObjectC2ERKS_
};
