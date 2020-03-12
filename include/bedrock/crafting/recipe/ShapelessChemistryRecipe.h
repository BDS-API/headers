#pragma once

#include <string>
#include <memory>
#include <vector>
#include "ShapelessRecipe.h"


class ShapelessChemistryRecipe : ShapelessRecipe {

public:
    static long ID;

    ~ShapelessChemistryRecipe();
    virtual void getId()const;
    virtual void matches(CraftingContainer &, Level &)const;
    void construct(std::string, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>);
    ShapelessChemistryRecipe(ShapelessChemistryRecipe &&);
};
