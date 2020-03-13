#pragma once

#include <string>
#include <memory>
#include "ShapelessRecipe.h"
#include <vector>


class ShulkerBoxRecipe : ShapelessRecipe {

public:
    static long ID;

    ~ShulkerBoxRecipe(); // _ZN16ShulkerBoxRecipeD2Ev
    virtual void assemble(CraftingContainer &)const; // _ZNK16ShulkerBoxRecipe8assembleER17CraftingContainer
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const; // _ZNK16ShulkerBoxRecipe10itemsMatchERK14ItemDescriptorS2_
    virtual bool itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const; // _ZNK16ShulkerBoxRecipe10itemsMatchERK14ItemDescriptoriiPK11CompoundTag
    ShulkerBoxRecipe(ShulkerBoxRecipe &&); // _ZN16ShulkerBoxRecipeC2EOS_
    ShulkerBoxRecipe(std::string, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>); // _ZN16ShulkerBoxRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorI16RecipeIngredientSaIS7_EERKS6_I12ItemInstanceSaISC_EEN4Util10HashStringEiPKN3mce4UUIDE
};
