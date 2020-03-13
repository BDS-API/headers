#pragma once

#include <string>


class Motive {

public:
    static long mDefaultImage;
    static long mKebab;
    static long mAztec;
    static long mAlban;
    static long mAztec2;
    static long mBomb;
    static long mPlant;
    static long mWasteland;
    static long mPool;
    static long mCourbet;
    static long mSea;
    static long mSunset;
    static long mCreebet;
    static long mWanderer;
    static long mGraham;
    static long mMatch;
    static long mBust;
    static long mStage;
    static long mVoid;
    static long mSkullAndRoses;
    static long mWither;
    static long mFighters;
    static long mPointer;
    static long mPigscene;
    static long mBurningSkull;
    static long mSkeleton;
    static long mDonkeyKong;
    static long mEarth;
    static long mWind;
    static long mFire;
    static long mWater;

    void getAllMotivesAsList(); // _ZN6Motive19getAllMotivesAsListEv
    void getMotiveByName(std::string const&); // _ZN6Motive15getMotiveByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    Motive(std::string, int, int, int, int, bool); // _ZN6MotiveC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiiib
    void getDefaultImage(); // _ZN6Motive15getDefaultImageEv
    std::string getName()const; // _ZNK6Motive7getNameB5cxx11Ev
    void getWidth()const; // _ZNK6Motive8getWidthEv
    void getHeight()const; // _ZNK6Motive9getHeightEv
    void getUo()const; // _ZNK6Motive5getUoEv
    void getVo()const; // _ZNK6Motive5getVoEv
    bool isPublic()const; // _ZNK6Motive8isPublicEv
    ~Motive(); // _ZN6MotiveD2Ev
};
