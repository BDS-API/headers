#pragma once

#include <string>
#include "MultiRecipe.h"
#include "../../../mce/UUID.h"
#include "../../level/Level.h"
#include "../../container/CraftingContainer.h"


class BannerDuplicateRecipe : MultiRecipe {

public:
    static long ID;

    virtual void getCraftingSize()const;
    virtual void getResultItem()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getIngredient(int, int)const;
    virtual bool isExperimental()const;
    virtual void size()const;
    ~BannerDuplicateRecipe();
    virtual void assemble(CraftingContainer &)const;
    BannerDuplicateRecipe(std::string);
    BannerDuplicateRecipe(std::string, mce::UUID const&);
};
