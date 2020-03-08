#pragma once

#include "../../level/Level"
#include "../../container/CraftingContainer"
#include "../../../mce/UUID"


class BannerAddPatternRecipe : MultiRecipe {

public:
    static long ID;

    virtual BannerAddPatternRecipe::~BannerAddPatternRecipe()
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
