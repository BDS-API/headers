#pragma once

#include "../../container/CraftingContainer"
#include "../../../mce/UUID"


class MapUpgradingRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    virtual MapUpgradingRecipe::~MapUpgradingRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    MapUpgradingRecipe(std::string, mce::UUID const&);
    void _getTagForUUID(mce::UUID const&);
};
