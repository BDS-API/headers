#pragma once

#include "../../../unmapped/RecipeIngredient.h"
#include "ShapedRecipe.h"
#include <string>
#include "../../level/Level.h"
#include <vector>
#include <memory>
#include "../../container/CraftingContainer.h"


class ShapedChemistryRecipe : ShapedRecipe {

public:
    static long ID;

    virtual void matches(CraftingContainer &, Level &)const;
    ~ShapedChemistryRecipe();
    virtual void getId()const;
    ShapedChemistryRecipe(ShapedChemistryRecipe &&);
    void construct(std::string, int, int, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>);
};
