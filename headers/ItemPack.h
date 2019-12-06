#pragma once

class ItemPack {

public:

    void ItemPack(void);
    void ItemPack(ItemPack&&);
    void add(RecipeIngredient const&, int);
    void remove(RecipeIngredient const&, int);
    void getIngredients(void)const;
    void getRecipeIngredient(RecipeIngredient const&);
    void getCount(RecipeIngredient const&)const;
};
