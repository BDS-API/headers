#pragma once

#include "../../../unmapped/RecipeIngredient.h"
#include <string>
#include "../../../mce/UUID.h"
#include "Recipe.h"
#include "../../level/Level.h"
#include <vector>
#include <memory>
#include "../../container/CraftingContainer.h"


class ShapedRecipe : Recipe {

public:
    virtual bool isExperimental()const;
    virtual void size()const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void assemble(CraftingContainer &)const;
    virtual void getResultItem()const;
    ~ShapedRecipe();
    virtual void matches(CraftingContainer &, Level &)const;
    virtual bool isShapeless()const;
    ShapedRecipe(ShapedRecipe &&);
    ShapedRecipe(std::string, int, int, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>);
    void setId(mce::UUID const&);
    void getIngredients()const;
    void matches(CraftingContainer &, int, int, bool)const;
    void generateUUID();
};
