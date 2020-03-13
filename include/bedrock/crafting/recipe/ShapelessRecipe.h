#pragma once

#include <string>
#include <memory>
#include "Recipe.h"
#include <vector>


class ShapelessRecipe : Recipe {

public:
    ~ShapelessRecipe(); // _ZN15ShapelessRecipeD2Ev
    virtual void assemble(CraftingContainer &)const; // _ZNK15ShapelessRecipe8assembleER17CraftingContainer
    virtual void getCraftingSize()const; // _ZNK15ShapelessRecipe15getCraftingSizeEv
    virtual void getIngredient(int, int)const; // _ZNK15ShapelessRecipe13getIngredientEii
    virtual void getResultItem()const; // _ZNK15ShapelessRecipe13getResultItemEv
    virtual bool isShapeless()const; // _ZNK15ShapelessRecipe11isShapelessEv
    virtual void matches(CraftingContainer &, Level &)const; // _ZNK15ShapelessRecipe7matchesER17CraftingContainerR5Level
    virtual void size()const; // _ZNK15ShapelessRecipe4sizeEv
    virtual bool isExperimental()const; // _ZNK15ShapelessRecipe14isExperimentalEv
    ShapelessRecipe(std::string, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>); // _ZN15ShapelessRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorI16RecipeIngredientSaIS7_EERKS6_I12ItemInstanceSaISC_EEN4Util10HashStringEiPKN3mce4UUIDE
    void generateUUID(); // _ZN15ShapelessRecipe12generateUUIDEv
    void setId(mce::UUID const&); // _ZN15ShapelessRecipe5setIdERKN3mce4UUIDE
    ShapelessRecipe(ShapelessRecipe &&); // _ZN15ShapelessRecipeC2EOS_
    void getIngredients()const; // _ZNK15ShapelessRecipe14getIngredientsEv
    void getWidth()const; // _ZNK15ShapelessRecipe8getWidthEv
    void getHeight()const; // _ZNK15ShapelessRecipe9getHeightEv
};
