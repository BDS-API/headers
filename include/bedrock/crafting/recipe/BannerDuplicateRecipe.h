#pragma once

#include <string>
#include "MultiRecipe.h"


class BannerDuplicateRecipe : MultiRecipe {

public:
    static long ID;

    ~BannerDuplicateRecipe(); // _ZN21BannerDuplicateRecipeD2Ev
    virtual void assemble(CraftingContainer &)const; // _ZNK21BannerDuplicateRecipe8assembleER17CraftingContainer
    virtual void getCraftingSize()const; // _ZNK21BannerDuplicateRecipe15getCraftingSizeEv
    virtual void getIngredient(int, int)const; // _ZNK21BannerDuplicateRecipe13getIngredientEii
    virtual void getResultItem()const; // _ZNK21BannerDuplicateRecipe13getResultItemEv
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK21BannerDuplicateRecipe7matchesER17CraftingContainerR5Level
    virtual void size()const; // _ZNK21BannerDuplicateRecipe4sizeEv
    virtual bool isExperimental()const; // _ZNK21BannerDuplicateRecipe14isExperimentalEv
    BannerDuplicateRecipe(std::string); // _ZN21BannerDuplicateRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    BannerDuplicateRecipe(std::string, mce::UUID const&); // _ZN21BannerDuplicateRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN3mce4UUIDE
};
