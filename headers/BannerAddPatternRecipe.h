#pragma once

class BannerAddPatternRecipe : MultiRecipe {

public:
    static long BannerAddPatternRecipe::ID;

    virtual ~BannerAddPatternRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    void BannerAddPatternRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void BannerAddPatternRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, mce::UUID const&);
    void matchPatterns(CraftingContainer &)const;
};
