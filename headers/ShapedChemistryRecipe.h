#pragma once

class ShapedChemistryRecipe : ShapedRecipe {

public:
    static long ID;

    virtual ~ShapedChemistryRecipe();
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getId(void)const;

    void ShapedChemistryRecipe(ShapedChemistryRecipe&&);
    void construct(std::string, int, int, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&<ItemInstance, std::allocator<std::vector const>>, Util::HashString);
};
