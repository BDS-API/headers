#pragma once

#include "../../../mce/UUID"
#include "../../container/CraftingContainer"
#include "../../level/Level"


class MapUpgradingRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    MapUpgradingRecipe::~MapUpgradingRecipe()
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    MapUpgradingRecipe(std::string, mce::UUID const&);
    void _getTagForUUID(mce::UUID const&);
};
