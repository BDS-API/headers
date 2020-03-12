#pragma once

#include <string>
#include "../mce/Image.h"


class SkinInfoData {

public:
    virtual void validateAndResizeSkinData(mce::Image &, bool);
    ~SkinInfoData();
    void setClean();
    void setForceAlpha(mce::Image &, int, int, int, int);
    void getGeometryData()const;
    void getSkinMutable();
    void copySkinPart(mce::Image &, int, int, int, int, int, int, int, int);
    bool isAlphaTest()const;
    void verifyIsPremiumGeometry(std::string const&);
    bool isDirty()const;
    void validateAlpha(mce::Image &, int, int, int, int, float, bool);
    void getSkin()const;
    void setNoAlpha(mce::Image &, int, int, int, int);
    bool isValidSize(unsigned long);
    bool isValidFullSize(unsigned long);
};
