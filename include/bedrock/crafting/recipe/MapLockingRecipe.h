#pragma once

#include <string>
#include "MultiRecipe.h"
#include "../../../mce/UUID.h"
#include "../../level/Level.h"
#include "../../container/CraftingContainer.h"


class MapLockingRecipe : MultiRecipe {

public:
    static long CartographyTableID;

    virtual void getCraftingSize()const;
    virtual void getResultItem()const;
    ~MapLockingRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual bool isExperimental()const;
    virtual void size()const;
    virtual void getIngredient(int, int)const;
    virtual void matches(CraftingContainer &, Level &)const;
    MapLockingRecipe(std::string, mce::UUID const&);
    MapLockingRecipe(std::string);
    void _setLevel(Level &)const;
};
