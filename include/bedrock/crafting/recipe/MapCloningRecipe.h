#pragma once

#include <string>
#include "MultiRecipe.h"


class MapCloningRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    virtual void size()const;
    virtual void assemble(CraftingContainer &)const;
    virtual bool isExperimental()const;
    virtual void getCraftingSize()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getResultItem()const;
    virtual void getIngredient(int, int)const;
    ~MapCloningRecipe();
    void _getTagForUUID(mce::UUID const&);
    MapCloningRecipe(std::string, mce::UUID const&);
};
