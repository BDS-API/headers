#pragma once

#include <string>
#include "MultiRecipe.h"


class MapCloningRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    ~MapCloningRecipe(); // _ZN16MapCloningRecipeD2Ev
    virtual void assemble(CraftingContainer &)const; // _ZNK16MapCloningRecipe8assembleER17CraftingContainer
    virtual void getCraftingSize()const; // _ZNK16MapCloningRecipe15getCraftingSizeEv
    virtual void getIngredient(int, int)const; // _ZNK16MapCloningRecipe13getIngredientEii
    virtual void getResultItem()const; // _ZNK16MapCloningRecipe13getResultItemEv
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK16MapCloningRecipe7matchesER17CraftingContainerR5Level
    virtual void size()const; // _ZNK16MapCloningRecipe4sizeEv
    virtual bool isExperimental()const; // _ZNK16MapCloningRecipe14isExperimentalEv
    MapCloningRecipe(std::string, mce::UUID const&); // _ZN16MapCloningRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN3mce4UUIDE
    void _getTagForUUID(mce::UUID const&); // _ZN16MapCloningRecipe14_getTagForUUIDERKN3mce4UUIDE
};
