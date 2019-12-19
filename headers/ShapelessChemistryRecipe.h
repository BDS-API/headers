#pragma once

class ShapelessChemistryRecipe : ShapelessRecipe {

public:
    static long ID;

    virtual ~ShapelessChemistryRecipe();
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getId(void)const;

    void ShapelessChemistryRecipe(ShapelessChemistryRecipe&&);
    void construct(std::string, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&<ItemInstance, std::allocator<std::vector const>>, Util::HashString, int);
};
