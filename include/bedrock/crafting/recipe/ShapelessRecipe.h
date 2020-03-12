#pragma once

#include <string>
#include "Recipe.h"
#include <vector>
#include <memory>


class ShapelessRecipe : Recipe {

public:
    virtual bool isShapeless()const;
    virtual bool isExperimental()const;
    virtual void assemble(CraftingContainer &)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual void getResultItem()const;
    virtual void getCraftingSize()const;
    ~ShapelessRecipe();
    virtual void getIngredient(int, int)const;
    void generateUUID();
    void getWidth()const;
    void setId(mce::UUID const&);
    ShapelessRecipe(std::string, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>);
    ShapelessRecipe(ShapelessRecipe &&);
    void getIngredients()const;
    void getHeight()const;
};
