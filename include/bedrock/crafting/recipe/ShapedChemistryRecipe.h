#pragma once

#include "../../container/CraftingContainer"
#include "../../../unmapped/RecipeIngredient"


class ShapedChemistryRecipe : ShapedRecipe {

public:
    static long ID;

    virtual ShapedChemistryRecipe::~ShapedChemistryRecipe();
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getId(void)const;

    ShapedChemistryRecipe(ShapedChemistryRecipe&&);
    void construct(std::string, int, int, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&<ItemInstance, std::allocator<std::vector const>>, Util::HashString);
};
