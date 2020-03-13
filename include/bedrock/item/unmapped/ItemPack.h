#pragma once



class ItemPack {

public:
    class KeyHasher;

    ~ItemPack(); // _ZN8ItemPackD2Ev
    ItemPack(); // _ZN8ItemPackC2Ev
    ItemPack(ItemPack &&); // _ZN8ItemPackC2EOS_
    void add(RecipeIngredient const&, int); // _ZN8ItemPack3addERK16RecipeIngredienti
    void remove(RecipeIngredient const&, int); // _ZN8ItemPack6removeERK16RecipeIngredienti
    void getIngredients()const; // _ZNK8ItemPack14getIngredientsEv
    void getRecipeIngredient(RecipeIngredient const&); // _ZN8ItemPack19getRecipeIngredientERK16RecipeIngredient
    void getCount(RecipeIngredient const&)const; // _ZNK8ItemPack8getCountERK16RecipeIngredient
    class KeyHasher {

    public:
        void operator()(ItemDescriptor const&)const; // _ZNK8ItemPack9KeyHasherclERK14ItemDescriptor
    };
};
