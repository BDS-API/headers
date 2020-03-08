#pragma once

#include "../../../mce/UUID"
#include "../../container/CraftingContainer"
#include "../../level/Level"


class BannerDuplicateRecipe : MultiRecipe {

public:
    static long ID;

    BannerDuplicateRecipe::~BannerDuplicateRecipe()
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    BannerDuplicateRecipe(std::string);
    BannerDuplicateRecipe(std::string, mce::UUID const&);
};
