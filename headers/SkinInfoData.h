#pragma once

class SkinInfoData {

public:
    virtual ~SkinInfoData();
    virtual void validateAndResizeSkinData(mce::Image &, bool);

    bool isValidSize(unsigned long);
    void copySkinPart(mce::Image &, int, int, int, int, int, int, int, int);
    void validateAlpha(mce::Image &, int, int, int, int, float, bool);
    void setForceAlpha(mce::Image &, int, int, int, int);
    void setNoAlpha(mce::Image &, int, int, int, int);
    void verifyIsPremiumGeometry(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    bool isValidFullSize(unsigned long);
    bool isDirty(void)const;
    void setClean(void);
    void getGeometryData(void)const;
    void getSkin(void)const;
    void getSkinMutable(void);
    bool isAlphaTest(void)const;
};
