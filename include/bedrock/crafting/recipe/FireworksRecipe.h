#pragma once

#include <string>
#include "MultiRecipe.h"


class FireworksRecipe : MultiRecipe {

public:
    static long ID;

    virtual void getCraftingSize()const;
    virtual void size()const;
    virtual void getIngredient(int, int)const;
    virtual void assemble(CraftingContainer &)const;
    virtual void matches(CraftingContainer &, Level &)const;
    ~FireworksRecipe();
    virtual bool isExperimental()const;
    virtual bool isShapeless()const;
    virtual void getResultItem()const;
    FireworksRecipe(std::string, mce::UUID const*);
};
