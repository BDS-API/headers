#pragma once

#include <string>
#include "../bedrock/item/ItemStack.h"
#include <vector>


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

    BannerPattern(std::string const&, std::string const&, ItemStack, short, bool);
    std::string getPattern()const;
    bool requiresPatternItem()const;
    void getPatternItemType()const;
    BannerPattern(std::string const&, std::string const&, std::vector<std::string> const&);
    bool matchesPatternItem(ItemInstance const&)const;
    ~BannerPattern();
    BannerPattern(std::string const&, std::string const&);
    BannerPattern(std::string const&, std::string const&, ItemStack, short);
    void initPatterns();
    bool hasPattern()const;
    std::string getName()const;
    void getIgnoreAux()const;
    std::string getNameID()const;
    void getPatternIndexFromNameID(std::string const&);
    BannerPattern(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    bool requiresIngredientItem()const;
    void getIngredientItem()const;
};
