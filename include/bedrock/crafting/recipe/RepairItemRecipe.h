#pragma once

#include <string>
#include "MultiRecipe.h"


class RepairItemRecipe : MultiRecipe {

public:
    static long ID;

    virtual bool isExperimental()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void assemble(CraftingContainer &)const;
    virtual void size()const;
    virtual void getResultItem()const;
    ~RepairItemRecipe();
    virtual void getIngredient(int, int)const;
    virtual void getCraftingSize()const;
    RepairItemRecipe(std::string, mce::UUID const*);
};
