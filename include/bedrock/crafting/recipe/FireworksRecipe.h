#pragma once

#include <string>
#include "MultiRecipe.h"


class FireworksRecipe : MultiRecipe {

public:
    static long ID;

    ~FireworksRecipe(); // _ZN15FireworksRecipeD2Ev
    virtual void assemble(CraftingContainer &)const; // _ZNK15FireworksRecipe8assembleER17CraftingContainer
    virtual void getCraftingSize()const; // _ZNK15FireworksRecipe15getCraftingSizeEv
    virtual void getIngredient(int, int)const; // _ZNK15FireworksRecipe13getIngredientEii
    virtual void getResultItem()const; // _ZNK15FireworksRecipe13getResultItemEv
    virtual bool isShapeless()const; // _ZNK15FireworksRecipe11isShapelessEv
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK15FireworksRecipe7matchesER17CraftingContainerR5Level
    virtual void size()const; // _ZNK15FireworksRecipe4sizeEv
    virtual bool isExperimental()const; // _ZNK15FireworksRecipe14isExperimentalEv
    FireworksRecipe(std::string, mce::UUID const*); // _ZN15FireworksRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPKN3mce4UUIDE
};
