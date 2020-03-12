#pragma once

#include <string>
#include "MultiRecipe.h"
#include "../../../mce/UUID.h"
#include "../../level/Level.h"
#include "../../container/CraftingContainer.h"


class BannerAddPatternRecipe : MultiRecipe {

public:
    static long ID;

    ~BannerAddPatternRecipe();
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getCraftingSize()const;
    virtual void assemble(CraftingContainer &)const;
    virtual bool isExperimental()const;
    virtual void size()const;
    BannerAddPatternRecipe(std::string, mce::UUID const&);
    void matchPatterns(CraftingContainer &)const;
    BannerAddPatternRecipe(std::string);
};
