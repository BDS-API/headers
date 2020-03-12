#pragma once

#include "../../../unmapped/RecipeIngredient.h"
#include <string>
#include "ShapelessRecipe.h"
#include "../../nbt/CompoundTag.h"
#include <vector>
#include <memory>
#include "../../container/CraftingContainer.h"
#include "../../item/unmapped/ItemDescriptor.h"


class ShulkerBoxRecipe : ShapelessRecipe {

public:
    static long ID;

    virtual void assemble(CraftingContainer &)const;
    virtual bool itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;
    ~ShulkerBoxRecipe();
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    ShulkerBoxRecipe(std::string, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>);
    ShulkerBoxRecipe(ShulkerBoxRecipe &&);
};
