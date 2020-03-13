#pragma once

#include <string>
#include "MultiRecipe.h"


class MapLockingRecipe : MultiRecipe {

public:
    static long CartographyTableID;

    ~MapLockingRecipe(); // _ZN16MapLockingRecipeD2Ev
    virtual void assemble(CraftingContainer &)const; // _ZNK16MapLockingRecipe8assembleER17CraftingContainer
    virtual void getCraftingSize()const; // _ZNK16MapLockingRecipe15getCraftingSizeEv
    virtual void getIngredient(int, int)const; // _ZNK16MapLockingRecipe13getIngredientEii
    virtual void getResultItem()const; // _ZNK16MapLockingRecipe13getResultItemEv
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK16MapLockingRecipe7matchesER17CraftingContainerR5Level
    virtual void size()const; // _ZNK16MapLockingRecipe4sizeEv
    virtual bool isExperimental()const; // _ZNK16MapLockingRecipe14isExperimentalEv
    MapLockingRecipe(std::string); // _ZN16MapLockingRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    MapLockingRecipe(std::string, mce::UUID const&); // _ZN16MapLockingRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN3mce4UUIDE
    void _setLevel(Level &)const; // _ZNK16MapLockingRecipe9_setLevelER5Level
};
