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

    void BannerAddPatternRecipe(std::string);
    void BannerAddPatternRecipe(std::string, mce::UUID const&);
    void matchPatterns(CraftingContainer &)const;
};
