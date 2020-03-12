#pragma once



class ItemPack {

public:
    class KeyHasher;

    void getIngredients()const;
    void remove(RecipeIngredient const&, int);
    ~ItemPack();
    void getCount(RecipeIngredient const&)const;
    void add(RecipeIngredient const&, int);
    ItemPack(ItemPack &&);
    void getRecipeIngredient(RecipeIngredient const&);
    ItemPack();
    class KeyHasher {

    public:
        void operator()(ItemDescriptor const&)const;
    };
};
