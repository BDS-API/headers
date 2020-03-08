#pragma once

#include "../../container/CraftingContainer"
#include "../../../unmapped/RecipeIngredient"
#include "../../../mce/UUID"


class ShapelessRecipe : Recipe {

public:
    virtual ShapelessRecipe::~ShapelessRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual bool isShapeless(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    ShapelessRecipe(std::string, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&<ItemInstance, std::allocator<std::vector const>>, Util::HashString, int, mce::UUID const*);
    void generateUUID(void);
    void setId(mce::UUID const&);
    ShapelessRecipe(ShapelessRecipe&&);
    void getIngredients(void)const;
    void getWidth(void)const;
    void getHeight(void)const;
};
