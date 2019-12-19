#pragma once

class BannerAddPatternRecipe : MultiRecipe {

public:
    static long ID;

    virtual BannerAddPatternRecipe::~BannerAddPatternRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    BannerAddPatternRecipe(std::string);
    BannerAddPatternRecipe(std::string, mce::UUID const&);
    void matchPatterns(CraftingContainer &)const;
};
