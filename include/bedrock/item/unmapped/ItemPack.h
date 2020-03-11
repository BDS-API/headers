#pragma once

#include "./ItemPack.h"
#include "../../../unmapped/RecipeIngredient.h"


class ItemPack {

public:

    ~ItemPack();
    ItemPack();
    ItemPack(ItemPack &&);
    void add(RecipeIngredient const&, int);
    void remove(RecipeIngredient const&, int);
    void getIngredients()const;
    void getRecipeIngredient(RecipeIngredient const&);
    void getCount(RecipeIngredient const&)const;
};
