#pragma once

#include <string>
#include "MultiRecipe.h"


class BookCloningRecipe : MultiRecipe {

public:
    static long ID;

    ~BookCloningRecipe(); // _ZN17BookCloningRecipeD2Ev
    virtual void assemble(CraftingContainer &)const; // _ZNK17BookCloningRecipe8assembleER17CraftingContainer
    virtual void getCraftingSize()const; // _ZNK17BookCloningRecipe15getCraftingSizeEv
    virtual void getIngredient(int, int)const; // _ZNK17BookCloningRecipe13getIngredientEii
    virtual void getResultItem()const; // _ZNK17BookCloningRecipe13getResultItemEv
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK17BookCloningRecipe7matchesER17CraftingContainerR5Level
    virtual void size()const; // _ZNK17BookCloningRecipe4sizeEv
    virtual bool isExperimental()const; // _ZNK17BookCloningRecipe14isExperimentalEv
    BookCloningRecipe(std::string); // _ZN17BookCloningRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    BookCloningRecipe(std::string, mce::UUID const&); // _ZN17BookCloningRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN3mce4UUIDE
};
