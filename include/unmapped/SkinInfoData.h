#pragma once

#include <string>


class SkinInfoData {

public:
    ~SkinInfoData();
    virtual void validateAndResizeSkinData(mce::Image &, bool);
    bool isValidSize(unsigned long);
    bool isDirty()const;
    void getSkinMutable();
    bool isValidFullSize(unsigned long);
    void setClean();
    void validateAlpha(mce::Image &, int, int, int, int, float, bool);
    void copySkinPart(mce::Image &, int, int, int, int, int, int, int, int);
    void verifyIsPremiumGeometry(std::string const&);
    void getGeometryData()const;
    void getSkin()const;
    void setNoAlpha(mce::Image &, int, int, int, int);
    void setForceAlpha(mce::Image &, int, int, int, int);
    bool isAlphaTest()const;
};
