#pragma once

#include "../../nbt/CompoundTag"
#include "../../container/CraftingContainer"
#include "../../item/unmapped/ItemDescriptor"
#include "../../../unmapped/RecipeIngredient"


class ShulkerBoxRecipe : ShapelessRecipe {

public:
    static long ID;

    virtual ShulkerBoxRecipe::~ShulkerBoxRecipe()
    virtual void assemble(CraftingContainer &)const;
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual bool itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;

    ShulkerBoxRecipe(ShulkerBoxRecipe&&);
    ShulkerBoxRecipe(std::string, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&<ItemInstance, std::allocator<std::vector const>>, Util::HashString, int, mce::UUID const*);
};
