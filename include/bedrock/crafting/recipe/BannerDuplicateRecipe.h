#pragma once

#include <string>
#include "MultiRecipe.h"


class BannerDuplicateRecipe : MultiRecipe {

public:
    static long ID;

    ~BannerDuplicateRecipe();
    virtual void getCraftingSize()const;
    virtual void getResultItem()const;
    virtual void size()const;
    virtual void getIngredient(int, int)const;
    virtual void assemble(CraftingContainer &)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual bool isExperimental()const;
    BannerDuplicateRecipe(std::string, mce::UUID const&);
    BannerDuplicateRecipe(std::string);
};
