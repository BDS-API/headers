#pragma once

#include "../bedrock/item/ItemInstance.h"
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

    bool matchesPatternItem(ItemInstance const&)const;
    void getIngredientItem()const;
    void getPatternItemType()const;
    BannerPattern(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    BannerPattern(std::string const&, std::string const&, std::vector<std::string> const&);
    void getPatternIndexFromNameID(std::string const&);
    bool hasPattern()const;
    std::string getPattern()const;
    ~BannerPattern();
    BannerPattern(std::string const&, std::string const&, ItemStack, short, bool);
    void initPatterns();
    void getIgnoreAux()const;
    std::string getNameID()const;
    bool requiresIngredientItem()const;
    bool requiresPatternItem()const;
    BannerPattern(std::string const&, std::string const&, ItemStack, short);
    std::string getName()const;
    BannerPattern(std::string const&, std::string const&);
};
