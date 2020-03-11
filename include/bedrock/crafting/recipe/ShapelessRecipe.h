#pragma once

#include "../../../mce/UUID.h"
#include "./Recipe.h"
#include <memory>
#include "../../container/CraftingContainer.h"
#include "../../level/Level.h"
#include "./ShapelessRecipe.h"
#include "../../../unmapped/RecipeIngredient.h"
#include <vector>
#include <string>


class ShapelessRecipe : Recipe {

public:
    virtual ~ShapelessRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual bool isShapeless()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    ShapelessRecipe(std::string, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&, std::allocator<std::vector const>);
    void generateUUID();
    void setId(mce::UUID const&);
    ShapelessRecipe(ShapelessRecipe &&);
    void getIngredients()const;
    void getWidth()const;
    void getHeight()const;
};
