#pragma once

#include <string>
#include "MultiRecipe.h"
#include "../../../mce/UUID.h"
#include "../../level/Level.h"
#include "../../container/CraftingContainer.h"


class MapCloningRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    virtual void assemble(CraftingContainer &)const;
    virtual bool isExperimental()const;
    virtual void getCraftingSize()const;
    ~MapCloningRecipe();
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual void getResultItem()const;
    virtual void getIngredient(int, int)const;
    void _getTagForUUID(mce::UUID const&);
    MapCloningRecipe(std::string, mce::UUID const&);
};
