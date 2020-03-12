#pragma once

#include <string>
#include "MultiRecipe.h"


class MapExtendingRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    virtual void assemble(CraftingContainer &)const;
    virtual void getIngredient(int, int)const;
    virtual bool isExperimental()const;
    virtual void getResultItem()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual void getCraftingSize()const;
    ~MapExtendingRecipe();
    MapExtendingRecipe(std::string, mce::UUID const&);
    MapExtendingRecipe(std::string);
    void _updateMapInstance(ItemInstance &)const;
    void _getTagForUUID(mce::UUID const&);
    void setLevel(Level &)const;
};
