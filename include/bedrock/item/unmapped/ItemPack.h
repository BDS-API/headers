#pragma once

#include "../../../unmapped/RecipeIngredient"


class ItemPack {

public:

    ItemPack(void);
    ItemPack(ItemPack&&);
    void add(RecipeIngredient const&, int);
    void remove(RecipeIngredient const&, int);
    void getIngredients()const;
    void getRecipeIngredient(RecipeIngredient const&);
    void getCount(RecipeIngredient const&)const;
};
