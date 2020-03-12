#pragma once

#include <string>
#include "MultiRecipe.h"


class MapLockingRecipe : MultiRecipe {

public:
    static long CartographyTableID;

    virtual void size()const;
    virtual bool isExperimental()const;
    virtual void assemble(CraftingContainer &)const;
    ~MapLockingRecipe();
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getResultItem()const;
    void _setLevel(Level &)const;
    MapLockingRecipe(std::string);
    MapLockingRecipe(std::string, mce::UUID const&);
};
