#pragma once

#include <string>
#include "MultiRecipe.h"


class BannerAddPatternRecipe : MultiRecipe {

public:
    static long ID;

    ~BannerAddPatternRecipe(); // _ZN22BannerAddPatternRecipeD2Ev
    virtual void assemble(CraftingContainer &)const; // _ZNK22BannerAddPatternRecipe8assembleER17CraftingContainer
    virtual void getCraftingSize()const; // _ZNK22BannerAddPatternRecipe15getCraftingSizeEv
    virtual void getIngredient(int, int)const; // _ZNK22BannerAddPatternRecipe13getIngredientEii
    virtual void getResultItem()const; // _ZNK22BannerAddPatternRecipe13getResultItemEv
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK22BannerAddPatternRecipe7matchesER17CraftingContainerR5Level
    virtual void size()const; // _ZNK22BannerAddPatternRecipe4sizeEv
    virtual bool isExperimental()const; // _ZNK22BannerAddPatternRecipe14isExperimentalEv
    BannerAddPatternRecipe(std::string); // _ZN22BannerAddPatternRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    BannerAddPatternRecipe(std::string, mce::UUID const&); // _ZN22BannerAddPatternRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN3mce4UUIDE
    void matchPatterns(CraftingContainer &)const; // _ZNK22BannerAddPatternRecipe13matchPatternsER17CraftingContainer
};
