#pragma once

#include "../../level/Level"
#include "../../container/CraftingContainer"
#include "../../../unmapped/RecipeIngredient"


class ShapedChemistryRecipe : ShapedRecipe {

public:
    static long ID;

    virtual ShapedChemistryRecipe::~ShapedChemistryRecipe()
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getId()const;

    ShapedChemistryRecipe(ShapedChemistryRecipe&&);
    void construct(std::string, int, int, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&, std::allocator<std::vector const>);
};
