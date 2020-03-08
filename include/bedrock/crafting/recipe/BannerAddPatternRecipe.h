#pragma once

#include "../../../mce/UUID"
#include "../../container/CraftingContainer"
#include "../../level/Level"


class BannerAddPatternRecipe : MultiRecipe {

public:
    static long ID;

    BannerAddPatternRecipe::~BannerAddPatternRecipe()
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    BannerAddPatternRecipe(std::string);
    BannerAddPatternRecipe(std::string, mce::UUID const&);
    void matchPatterns(CraftingContainer &)const;
};
