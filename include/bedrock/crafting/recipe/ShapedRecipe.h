#pragma once

#include "./ShapedRecipe.h"
#include "../../../mce/UUID.h"
#include "./Recipe.h"
#include <memory>
#include "../../container/CraftingContainer.h"
#include "../../level/Level.h"
#include "../../../unmapped/RecipeIngredient.h"
#include <vector>
#include <string>


class ShapedRecipe : Recipe {

public:
    virtual ~ShapedRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual bool isShapeless()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    ShapedRecipe(std::string, int, int, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&, std::allocator<std::vector const>);
    void generateUUID();
    void setId(mce::UUID const&);
    ShapedRecipe(ShapedRecipe &&);
    void matches(CraftingContainer &, int, int, bool)const;
    void getIngredients()const;
};
