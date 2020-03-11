#pragma once

#include "./ShapedRecipe.h"
#include "./ShapedChemistryRecipe.h"
#include <memory>
#include "../../container/CraftingContainer.h"
#include "../../level/Level.h"
#include "../../../unmapped/RecipeIngredient.h"
#include <vector>
#include <string>


class ShapedChemistryRecipe : ShapedRecipe {

public:
    static long ID;

    virtual ~ShapedChemistryRecipe();
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getId()const;

    ShapedChemistryRecipe(ShapedChemistryRecipe &&);
    void construct(std::string, int, int, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&, std::allocator<std::vector const>);
};
