#pragma once

#include <string>
#include <vector>
#include "../bedrock/item/ItemStack.h"


class BannerPattern {

public:
    static long mPatterns;
    static long mBase;
    static long mBorder;
    static long mBricks;
    static long mCircle;
    static long mCreeper;
    static long mCross;
    static long mCurlyBorder;
    static long mDiagonalLeft;
    static long mDiagonalRight;
    static long mDiagonalUpLeft;
    static long mDiagonalUpRight;
    static long mFlower;
    static long mGradient;
    static long mGradientUp;
    static long mHalfHorizontal;
    static long mHalfHorizontalBottom;
    static long mHalfVertical;
    static long mHalfVerticalRight;
    static long mMojang;
    static long mRhombus;
    static long mSkull;
    static long mSmallStripes;
    static long mSquareBottomLeft;
    static long mSquareBottomRight;
    static long mSquareTopLeft;
    static long mSquareTopRight;
    static long mStraightCross;
    static long mStripeBottom;
    static long mStripeCenter;
    static long mStripeDownleft;
    static long mStripeDownright;
    static long mStripeLeft;
    static long mStripeMiddle;
    static long mStripeRight;
    static long mStripeTop;
    static long mTriangleBottom;
    static long mTriangleTop;
    static long mTrianglesBottom;
    static long mTrianglesTop;

    void getPatternIndexFromNameID(std::string const&); // _ZN13BannerPattern25getPatternIndexFromNameIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getNameID()const; // _ZNK13BannerPattern9getNameIDB5cxx11Ev
    BannerPattern(std::string const&, std::string const&); // _ZN13BannerPatternC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    BannerPattern(std::string const&, std::string const&, std::vector<std::string> const&); // _ZN13BannerPatternC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_RKSt6vectorIS5_SaIS5_EE
    BannerPattern(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&); // _ZN13BannerPatternC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_S7_
    BannerPattern(std::string const&, std::string const&, ItemStack, short); // _ZN13BannerPatternC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_9ItemStacks
    BannerPattern(std::string const&, std::string const&, ItemStack, short, bool); // _ZN13BannerPatternC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_9ItemStacksb
    void initPatterns(); // _ZN13BannerPattern12initPatternsEv
    bool hasPattern()const; // _ZNK13BannerPattern10hasPatternEv
    bool requiresIngredientItem()const; // _ZNK13BannerPattern22requiresIngredientItemEv
    void getIngredientItem()const; // _ZNK13BannerPattern17getIngredientItemEv
    std::string getPattern()const; // _ZNK13BannerPattern10getPatternB5cxx11Ev
    std::string getName()const; // _ZNK13BannerPattern7getNameB5cxx11Ev
    void getIgnoreAux()const; // _ZNK13BannerPattern12getIgnoreAuxEv
    bool requiresPatternItem()const; // _ZNK13BannerPattern19requiresPatternItemEv
    bool matchesPatternItem(ItemInstance const&)const; // _ZNK13BannerPattern18matchesPatternItemERK12ItemInstance
    void getPatternItemType()const; // _ZNK13BannerPattern18getPatternItemTypeEv
    ~BannerPattern(); // _ZN13BannerPatternD2Ev
};
