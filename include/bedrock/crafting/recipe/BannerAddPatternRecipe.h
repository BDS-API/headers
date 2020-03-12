#pragma once

#include <string>
#include "MultiRecipe.h"


class BannerAddPatternRecipe : MultiRecipe {

public:
    static long ID;

    virtual void getIngredient(int, int)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getResultItem()const;
    virtual void assemble(CraftingContainer &)const;
    virtual void size()const;
    ~BannerAddPatternRecipe();
    virtual bool isExperimental()const;
    virtual void getCraftingSize()const;
    BannerAddPatternRecipe(std::string, mce::UUID const&);
    BannerAddPatternRecipe(std::string);
    void matchPatterns(CraftingContainer &)const;
};
