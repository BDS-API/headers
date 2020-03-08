#pragma once

#include "../../level/Level"
#include "../../container/CraftingContainer"
#include "../../../mce/UUID"
#include "../../../unmapped/RecipeIngredient"


class ShapedRecipe : Recipe {

public:
    virtual ShapedRecipe::~ShapedRecipe()
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual bool isShapeless()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    ShapedRecipe(std::string, int, int, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&<ItemInstance, std::allocator<std::vector const>>, Util::HashString, int, mce::UUID const*);
    void generateUUID();
    void setId(mce::UUID const&);
    ShapedRecipe(ShapedRecipe&&);
    void matches(CraftingContainer &, int, int, bool)const;
    void getIngredients()const;
};
