#pragma once

#include <vector>
#include <string>
#include "ShapedRecipe.h"
#include <memory>


class ShapedChemistryRecipe : ShapedRecipe {

public:
    static long ID;

    virtual void getId()const;
    ~ShapedChemistryRecipe();
    virtual void matches(CraftingContainer &, Level &)const;
    ShapedChemistryRecipe(ShapedChemistryRecipe &&);
    void construct(std::string, int, int, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>);
};
