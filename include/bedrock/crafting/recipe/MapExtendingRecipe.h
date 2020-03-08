#pragma once

#include "../../container/CraftingContainer"
#include "../../level/Level"
#include "../../item/ItemInstance"
#include "../../../mce/UUID"


class MapExtendingRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    virtual MapExtendingRecipe::~MapExtendingRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    MapExtendingRecipe(std::string);
    MapExtendingRecipe(std::string, mce::UUID const&);
    void _getTagForUUID(mce::UUID const&);
    void setLevel(Level &)const;
    void _updateMapInstance(ItemInstance &)const;
};
