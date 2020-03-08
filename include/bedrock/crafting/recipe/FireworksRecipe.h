#pragma once

#include "../../level/Level"
#include "../../container/CraftingContainer"
#include "../../../mce/UUID"


class FireworksRecipe : MultiRecipe {

public:
    static long ID;

    virtual FireworksRecipe::~FireworksRecipe()
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual bool isShapeless()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    FireworksRecipe(std::string, mce::UUID const*);
};
