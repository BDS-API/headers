#pragma once

#include "../../item/unmapped/ItemDescriptor.h"
#include "./ShulkerBoxRecipe.h"
#include "../../nbt/CompoundTag.h"
#include <memory>
#include "../../container/CraftingContainer.h"
#include "./ShapelessRecipe.h"
#include "../../../unmapped/RecipeIngredient.h"
#include <vector>
#include <string>


class ShulkerBoxRecipe : ShapelessRecipe {

public:
    static long ID;

    virtual ~ShulkerBoxRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual bool itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;

    ShulkerBoxRecipe(ShulkerBoxRecipe &&);
    ShulkerBoxRecipe(std::string, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&, std::allocator<std::vector const>);
};
