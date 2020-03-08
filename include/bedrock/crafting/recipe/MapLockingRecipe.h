#pragma once

#include "../../level/Level"
#include "../../container/CraftingContainer"
#include "../../../mce/UUID"


class MapLockingRecipe : MultiRecipe {

public:
    static long CartographyTableID;

    virtual MapLockingRecipe::~MapLockingRecipe()
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    MapLockingRecipe(std::string);
    MapLockingRecipe(std::string, mce::UUID const&);
    void _setLevel(Level &)const;
};
