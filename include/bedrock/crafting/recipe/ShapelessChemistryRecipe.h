#pragma once

#include "../../level/Level"
#include "../../container/CraftingContainer"
#include "../../../unmapped/RecipeIngredient"


class ShapelessChemistryRecipe : ShapelessRecipe {

public:
    static long ID;

    virtual ShapelessChemistryRecipe::~ShapelessChemistryRecipe()
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getId()const;

    ShapelessChemistryRecipe(ShapelessChemistryRecipe&&);
    void construct(std::string, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&, std::allocator<std::vector const>);
};
