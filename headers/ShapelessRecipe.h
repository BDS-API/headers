#pragma once

class ShapelessRecipe : Recipe {

public:
    virtual ~ShapelessRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual bool isShapeless(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    void ShapelessRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&<ItemInstance, std::allocator<std::vector const>>, Util::HashString, int, mce::UUID const*);
    void generateUUID(void);
    void setId(mce::UUID const&);
    void ShapelessRecipe(ShapelessRecipe&&);
    void getIngredients(void)const;
    void getWidth(void)const;
    void getHeight(void)const;
};
