#pragma once

#include "./ShapelessChemistryRecipe.h"
#include <memory>
#include "../../container/CraftingContainer.h"
#include "../../level/Level.h"
#include "./ShapelessRecipe.h"
#include "../../../unmapped/RecipeIngredient.h"
#include <vector>
#include <string>


class ShapelessChemistryRecipe : ShapelessRecipe {

public:
    static long ID;

    virtual ~ShapelessChemistryRecipe();
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getId()const;

    ShapelessChemistryRecipe(ShapelessChemistryRecipe &&);
    void construct(std::string, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&, std::allocator<std::vector const>);
};
