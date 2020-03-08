#pragma once

#include "../../level/Level"
#include "../../container/CraftingContainer"
#include "../../../mce/UUID"


class BannerDuplicateRecipe : MultiRecipe {

public:
    static long ID;

    virtual BannerDuplicateRecipe::~BannerDuplicateRecipe()
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
