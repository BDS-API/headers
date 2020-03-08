#pragma once

#include "../../item/ItemInstance"
#include "../../../mce/UUID"
#include "../../container/CraftingContainer"
#include "../../level/Level"


class MapExtendingRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    MapExtendingRecipe::~MapExtendingRecipe()
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    MapExtendingRecipe(std::string);
    MapExtendingRecipe(std::string, mce::UUID const&);
    void _getTagForUUID(mce::UUID const&);
    void setLevel(Level &)const;
    void _updateMapInstance(ItemInstance &)const;
};
