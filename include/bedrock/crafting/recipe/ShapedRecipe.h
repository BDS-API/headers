#pragma once

#include <string>
#include <memory>
#include "Recipe.h"
#include <vector>


class ShapedRecipe : Recipe {

public:
    ~ShapedRecipe(); // _ZN12ShapedRecipeD2Ev
    virtual void assemble(CraftingContainer &)const; // _ZNK12ShapedRecipe8assembleER17CraftingContainer
    virtual void getCraftingSize()const; // _ZNK12ShapedRecipe15getCraftingSizeEv
    virtual void getIngredient(int, int)const; // _ZNK12ShapedRecipe13getIngredientEii
    virtual void getResultItem()const; // _ZNK12ShapedRecipe13getResultItemEv
    virtual bool isShapeless()const; // _ZNK12ShapedRecipe11isShapelessEv
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK12ShapedRecipe7matchesER17CraftingContainerR5Level
    virtual void size()const; // _ZNK12ShapedRecipe4sizeEv
    virtual bool isExperimental()const; // _ZNK12ShapedRecipe14isExperimentalEv
    ShapedRecipe(std::string, int, int, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>); // _ZN12ShapedRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiRKSt6vectorI16RecipeIngredientSaIS7_EERKS6_I12ItemInstanceSaISC_EEN4Util10HashStringEiPKN3mce4UUIDE
    void generateUUID(); // _ZN12ShapedRecipe12generateUUIDEv
    void setId(mce::UUID const&); // _ZN12ShapedRecipe5setIdERKN3mce4UUIDE
    ShapedRecipe(ShapedRecipe &&); // _ZN12ShapedRecipeC2EOS_
    void matches(CraftingContainer &, int, int, bool)const; // _ZNK12ShapedRecipe7matchesER17CraftingContaineriib
    void getIngredients()const; // _ZNK12ShapedRecipe14getIngredientsEv
};
