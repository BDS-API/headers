#pragma once

#include <string>


class SkinInfoData {

public:
    ~SkinInfoData(); // _ZN12SkinInfoDataD2Ev
    virtual void validateAndResizeSkinData(mce::Image &, bool); // _ZN12SkinInfoData25validateAndResizeSkinDataERN3mce5ImageEb
    bool isValidSize(unsigned long); // _ZN12SkinInfoData11isValidSizeEm
    void copySkinPart(mce::Image &, int, int, int, int, int, int, int, int); // _ZN12SkinInfoData12copySkinPartERN3mce5ImageEiiiiiiii
    void validateAlpha(mce::Image &, int, int, int, int, float, bool); // _ZN12SkinInfoData13validateAlphaERN3mce5ImageEiiiifb
    void setForceAlpha(mce::Image &, int, int, int, int); // _ZN12SkinInfoData13setForceAlphaERN3mce5ImageEiiii
    void setNoAlpha(mce::Image &, int, int, int, int); // _ZN12SkinInfoData10setNoAlphaERN3mce5ImageEiiii
    void verifyIsPremiumGeometry(std::string const&); // _ZN12SkinInfoData23verifyIsPremiumGeometryERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isValidFullSize(unsigned long); // _ZN12SkinInfoData15isValidFullSizeEm
    bool isDirty()const; // _ZNK12SkinInfoData7isDirtyEv
    void setClean(); // _ZN12SkinInfoData8setCleanEv
    void getGeometryData()const; // _ZNK12SkinInfoData15getGeometryDataEv
    void getSkin()const; // _ZNK12SkinInfoData7getSkinEv
    void getSkinMutable(); // _ZN12SkinInfoData14getSkinMutableEv
    bool isAlphaTest()const; // _ZNK12SkinInfoData11isAlphaTestEv
};
