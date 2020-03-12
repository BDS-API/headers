#pragma once

#include <string>
#include "Recipe.h"
#include <vector>
#include <memory>


class ShapedRecipe : Recipe {

public:
    virtual void getResultItem()const;
    virtual void size()const;
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual bool isShapeless()const;
    virtual bool isExperimental()const;
    ~ShapedRecipe();
    void setId(mce::UUID const&);
    void matches(CraftingContainer &, int, int, bool)const;
    ShapedRecipe(std::string, int, int, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>);
    void getIngredients()const;
    void generateUUID();
    ShapedRecipe(ShapedRecipe &&);
};
