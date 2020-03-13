#pragma once

#include <string>
#include "MultiRecipe.h"


class RepairItemRecipe : MultiRecipe {

public:
    static long ID;

    ~RepairItemRecipe(); // _ZN16RepairItemRecipeD2Ev
    virtual void assemble(CraftingContainer &)const; // _ZNK16RepairItemRecipe8assembleER17CraftingContainer
    virtual void getCraftingSize()const; // _ZNK16RepairItemRecipe15getCraftingSizeEv
    virtual void getIngredient(int, int)const; // _ZNK16RepairItemRecipe13getIngredientEii
    virtual void getResultItem()const; // _ZNK16RepairItemRecipe13getResultItemEv
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK16RepairItemRecipe7matchesER17CraftingContainerR5Level
    virtual void size()const; // _ZNK16RepairItemRecipe4sizeEv
    virtual bool isExperimental()const; // _ZNK16RepairItemRecipe14isExperimentalEv
    RepairItemRecipe(std::string, mce::UUID const*); // _ZN16RepairItemRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPKN3mce4UUIDE
};
