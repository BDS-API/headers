#pragma once

#include "../../../mce/UUID.h"
#include "./MultiRecipe.h"
#include "../../container/CraftingContainer.h"
#include "../../level/Level.h"
#include "../../item/ItemInstance.h"
#include <string>


class MapExtendingRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    virtual ~MapExtendingRecipe();
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
