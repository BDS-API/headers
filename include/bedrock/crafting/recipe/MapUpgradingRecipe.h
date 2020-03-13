#pragma once

#include <string>
#include "MultiRecipe.h"


class MapUpgradingRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    ~MapUpgradingRecipe(); // _ZN18MapUpgradingRecipeD2Ev
    virtual void assemble(CraftingContainer &)const; // _ZNK18MapUpgradingRecipe8assembleER17CraftingContainer
    virtual void getCraftingSize()const; // _ZNK18MapUpgradingRecipe15getCraftingSizeEv
    virtual void getIngredient(int, int)const; // _ZNK18MapUpgradingRecipe13getIngredientEii
    virtual void getResultItem()const; // _ZNK18MapUpgradingRecipe13getResultItemEv
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK18MapUpgradingRecipe7matchesER17CraftingContainerR5Level
    virtual void size()const; // _ZNK18MapUpgradingRecipe4sizeEv
    virtual bool isExperimental()const; // _ZNK18MapUpgradingRecipe14isExperimentalEv
    MapUpgradingRecipe(std::string, mce::UUID const&); // _ZN18MapUpgradingRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN3mce4UUIDE
    void _getTagForUUID(mce::UUID const&); // _ZN18MapUpgradingRecipe14_getTagForUUIDERKN3mce4UUIDE
};
