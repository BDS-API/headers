#pragma once

#include <string>
#include "MultiRecipe.h"


class MapUpgradingRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    ~MapUpgradingRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void size()const;
    virtual void getResultItem()const;
    virtual void getIngredient(int, int)const;
    virtual bool isExperimental()const;
    virtual void getCraftingSize()const;
    virtual void matches(CraftingContainer &, Level &)const;
    void _getTagForUUID(mce::UUID const&);
    MapUpgradingRecipe(std::string, mce::UUID const&);
};
