#pragma once



class ItemPack {

public:

    ItemPack(void);
    ItemPack(ItemPack&&);
    void add(RecipeIngredient const&, int);
    void remove(RecipeIngredient const&, int);
    void getIngredients(void)const;
    void getRecipeIngredient(RecipeIngredient const&);
    void getCount(RecipeIngredient const&)const;
};
