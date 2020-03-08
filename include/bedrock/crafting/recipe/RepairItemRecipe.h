#pragma once

#include "../../../mce/UUID"
#include "../../container/CraftingContainer"
#include "../../level/Level"


class RepairItemRecipe : MultiRecipe {

public:
    static long ID;

    RepairItemRecipe::~RepairItemRecipe()
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    RepairItemRecipe(std::string, mce::UUID const*);
};
