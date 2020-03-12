#pragma once

#include <string>
#include <memory>
#include <vector>
#include "ShapelessRecipe.h"


class ShulkerBoxRecipe : ShapelessRecipe {

public:
    static long ID;

    ~ShulkerBoxRecipe();
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual void assemble(CraftingContainer &)const;
    virtual bool itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;
    ShulkerBoxRecipe(ShulkerBoxRecipe &&);
    ShulkerBoxRecipe(std::string, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>);
};
