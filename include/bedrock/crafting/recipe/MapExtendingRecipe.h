#pragma once

#include <string>
#include "MultiRecipe.h"


class MapExtendingRecipe : MultiRecipe {

public:
    static long CraftingTableID;
    static long CartographyTableID;

    ~MapExtendingRecipe(); // _ZN18MapExtendingRecipeD2Ev
    virtual void assemble(CraftingContainer &)const; // _ZNK18MapExtendingRecipe8assembleER17CraftingContainer
    virtual void getCraftingSize()const; // _ZNK18MapExtendingRecipe15getCraftingSizeEv
    virtual void getIngredient(int, int)const; // _ZNK18MapExtendingRecipe13getIngredientEii
    virtual void getResultItem()const; // _ZNK18MapExtendingRecipe13getResultItemEv
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK18MapExtendingRecipe7matchesER17CraftingContainerR5Level
    virtual void size()const; // _ZNK18MapExtendingRecipe4sizeEv
    virtual bool isExperimental()const; // _ZNK18MapExtendingRecipe14isExperimentalEv
    MapExtendingRecipe(std::string); // _ZN18MapExtendingRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    MapExtendingRecipe(std::string, mce::UUID const&); // _ZN18MapExtendingRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN3mce4UUIDE
    void _getTagForUUID(mce::UUID const&); // _ZN18MapExtendingRecipe14_getTagForUUIDERKN3mce4UUIDE
    void setLevel(Level &)const; // _ZNK18MapExtendingRecipe8setLevelER5Level
    void _updateMapInstance(ItemInstance &)const; // _ZNK18MapExtendingRecipe18_updateMapInstanceER12ItemInstance
};
