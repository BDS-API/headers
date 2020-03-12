#pragma once

#include "../../../unmapped/RecipeIngredient.h"
#include <string>
#include "ShapelessRecipe.h"
#include "../../level/Level.h"
#include <vector>
#include <memory>
#include "../../container/CraftingContainer.h"


class ShapelessChemistryRecipe : ShapelessRecipe {

public:
    static long ID;

    virtual void matches(CraftingContainer &, Level &)const;
    ~ShapelessChemistryRecipe();
    virtual void getId()const;
    void construct(std::string, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>);
    ShapelessChemistryRecipe(ShapelessChemistryRecipe &&);
};
