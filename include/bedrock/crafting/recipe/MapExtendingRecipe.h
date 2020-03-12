#pragma once

#include "MultiRecipe.h"
#include "../../item/ItemInstance.h"
#include "../../../mce/UUID.h"
#include <string>
#include "../../level/Level.h"
#include "../../container/CraftingContainer.h"


class MapExtendingRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    virtual void getIngredient(int, int)const;
    ~MapExtendingRecipe();
    virtual void matches(CraftingContainer &, Level &)const;
    virtual bool isExperimental()const;
    virtual void getCraftingSize()const;
    virtual void size()const;
    virtual void assemble(CraftingContainer &)const;
    virtual void getResultItem()const;
    MapExtendingRecipe(std::string, mce::UUID const&);
    void setLevel(Level &)const;
    void _getTagForUUID(mce::UUID const&);
    MapExtendingRecipe(std::string);
    void _updateMapInstance(ItemInstance &)const;
};
