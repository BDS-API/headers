#pragma once

#include "../../container/CraftingContainer"
#include "../../../unmapped/RecipeIngredient"
#include "../../level/Level"


class ShapelessChemistryRecipe : ShapelessRecipe {

public:
    static long ID;

    ShapelessChemistryRecipe::~ShapelessChemistryRecipe()
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getId()const;

    ShapelessChemistryRecipe(ShapelessChemistryRecipe&&);
    void construct(std::string, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&, std::allocator<std::vector const>);
};
