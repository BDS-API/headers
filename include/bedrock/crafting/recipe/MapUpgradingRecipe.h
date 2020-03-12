#pragma once

#include <string>
#include "MultiRecipe.h"
#include "../../../mce/UUID.h"
#include "../../level/Level.h"
#include "../../container/CraftingContainer.h"


class MapUpgradingRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getResultItem()const;
    virtual void assemble(CraftingContainer &)const;
    virtual void size()const;
    virtual void getIngredient(int, int)const;
    ~MapUpgradingRecipe();
    virtual void getCraftingSize()const;
    virtual bool isExperimental()const;
    MapUpgradingRecipe(std::string, mce::UUID const&);
    void _getTagForUUID(mce::UUID const&);
};
