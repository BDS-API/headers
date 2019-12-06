#pragma once

class ShapedChemistryRecipe : ShapedRecipe {

public:
    static long ShapedChemistryRecipe::ID;

    virtual ~ShapedChemistryRecipe();
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getId(void)const;

    void ShapedChemistryRecipe(ShapedChemistryRecipe&&);
    void construct(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, int, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&<ItemInstance, std::allocator<std::vector const>>, Util::HashString);
};
