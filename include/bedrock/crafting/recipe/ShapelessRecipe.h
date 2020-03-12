#pragma once

#include "../../../unmapped/RecipeIngredient.h"
#include <string>
#include "../../../mce/UUID.h"
#include "Recipe.h"
#include "../../level/Level.h"
#include <vector>
#include <memory>
#include "../../container/CraftingContainer.h"


class ShapelessRecipe : Recipe {

public:
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getResultItem()const;
    virtual void assemble(CraftingContainer &)const;
    virtual bool isShapeless()const;
    virtual void getIngredient(int, int)const;
    ~ShapelessRecipe();
    virtual bool isExperimental()const;
    virtual void size()const;
    virtual void getCraftingSize()const;
    void setId(mce::UUID const&);
    void generateUUID();
    ShapelessRecipe(ShapelessRecipe &&);
    void getWidth()const;
    void getHeight()const;
    void getIngredients()const;
    ShapelessRecipe(std::string, std::vector<RecipeIngredient> const&, std::vector const&, std::allocator<std::vector const>);
};
