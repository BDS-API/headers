#pragma once

#include "../../level/Level"
#include "../../container/CraftingContainer"
#include "../../../mce/UUID"
#include "../../../unmapped/RecipeIngredient"


class ShapelessRecipe : Recipe {

public:
    virtual ShapelessRecipe::~ShapelessRecipe()
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual bool isShapeless()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    ShapelessRecipe(std::string, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&<ItemInstance, std::allocator<std::vector const>>, Util::HashString, int, mce::UUID const*);
    void generateUUID();
    void setId(mce::UUID const&);
    ShapelessRecipe(ShapelessRecipe&&);
    void getIngredients()const;
    void getWidth()const;
    void getHeight()const;
};
