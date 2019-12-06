#pragma once

class BannerPattern {

public:
    static long BannerPattern::mPatterns;
    static long BannerPattern::mBase;
    static long BannerPattern::mBorder;
    static long BannerPattern::mBricks;
    static long BannerPattern::mCircle;
    static long BannerPattern::mCreeper;
    static long BannerPattern::mCross;
    static long BannerPattern::mCurlyBorder;
    static long BannerPattern::mDiagonalLeft;
    static long BannerPattern::mDiagonalRight;
    static long BannerPattern::mDiagonalUpLeft;
    static long BannerPattern::mDiagonalUpRight;
    static long BannerPattern::mFlower;
    static long BannerPattern::mGradient;
    static long BannerPattern::mGradientUp;
    static long BannerPattern::mHalfHorizontal;
    static long BannerPattern::mHalfHorizontalBottom;
    static long BannerPattern::mHalfVertical;
    static long BannerPattern::mHalfVerticalRight;
    static long BannerPattern::mMojang;
    static long BannerPattern::mRhombus;
    static long BannerPattern::mSkull;
    static long BannerPattern::mSmallStripes;
    static long BannerPattern::mSquareBottomLeft;
    static long BannerPattern::mSquareBottomRight;
    static long BannerPattern::mSquareTopLeft;
    static long BannerPattern::mSquareTopRight;
    static long BannerPattern::mStraightCross;
    static long BannerPattern::mStripeBottom;
    static long BannerPattern::mStripeCenter;
    static long BannerPattern::mStripeDownleft;
    static long BannerPattern::mStripeDownright;
    static long BannerPattern::mStripeLeft;
    static long BannerPattern::mStripeMiddle;
    static long BannerPattern::mStripeRight;
    static long BannerPattern::mStripeTop;
    static long BannerPattern::mTriangleBottom;
    static long BannerPattern::mTriangleTop;
    static long BannerPattern::mTrianglesBottom;
    static long BannerPattern::mTrianglesTop;


    void getPatternIndexFromNameID(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void BannerPattern(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void BannerPattern(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void BannerPattern(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void BannerPattern(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ItemStack, short);
    void BannerPattern(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ItemStack, short, bool);
    void initPatterns(void);
    bool hasPattern(void)const;
    void requiresIngredientItem(void)const;
    void getIngredientItem(void)const;
    void getIgnoreAux(void)const;
    void requiresPatternItem(void)const;
    void matchesPatternItem(ItemInstance const&)const;
    void getPatternItemType(void)const;
};
