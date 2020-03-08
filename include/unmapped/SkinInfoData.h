#pragma once

#include "../mce/Image"


class SkinInfoData {

public:
    virtual SkinInfoData::~SkinInfoData()
    virtual void validateAndResizeSkinData(mce::Image &, bool);

    bool isValidSize(unsigned long);
    void copySkinPart(mce::Image &, int, int, int, int, int, int, int, int);
    void validateAlpha(mce::Image &, int, int, int, int, float, bool);
    void setForceAlpha(mce::Image &, int, int, int, int);
    void setNoAlpha(mce::Image &, int, int, int, int);
    void verifyIsPremiumGeometry(std::string const&);
    bool isValidFullSize(unsigned long);
    bool isDirty()const;
    void setClean();
    void getGeometryData()const;
    void getSkin()const;
    void getSkinMutable();
    bool isAlphaTest()const;
};
