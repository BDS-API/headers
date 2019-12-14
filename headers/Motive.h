#pragma once

class Motive {

public:
    static long Motive::mDefaultImage;
    static long Motive::mKebab;
    static long Motive::mAztec;
    static long Motive::mAlban;
    static long Motive::mAztec2;
    static long Motive::mBomb;
    static long Motive::mPlant;
    static long Motive::mWasteland;
    static long Motive::mPool;
    static long Motive::mCourbet;
    static long Motive::mSea;
    static long Motive::mSunset;
    static long Motive::mCreebet;
    static long Motive::mWanderer;
    static long Motive::mGraham;
    static long Motive::mMatch;
    static long Motive::mBust;
    static long Motive::mStage;
    static long Motive::mVoid;
    static long Motive::mSkullAndRoses;
    static long Motive::mWither;
    static long Motive::mFighters;
    static long Motive::mPointer;
    static long Motive::mPigscene;
    static long Motive::mBurningSkull;
    static long Motive::mSkeleton;
    static long Motive::mDonkeyKong;
    static long Motive::mEarth;
    static long Motive::mWind;
    static long Motive::mFire;
    static long Motive::mWater;


    void getAllMotivesAsList(void);
    void getMotiveByName(std::string const&);
    void Motive(std::string, int, int, int, int, bool);
    void getDefaultImage(void);
    void getWidth(void)const;
    void getHeight(void)const;
    void getUo(void)const;
    void getVo(void)const;
    bool isPublic(void)const;
};
