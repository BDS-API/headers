#pragma once

#include "../../../unmapped/RecipeIngredient.h"
#include "ItemDescriptor.h"


class ItemPack {

public:
    class KeyHasher;

    ItemPack(ItemPack &&);
    ItemPack();
    ~ItemPack();
    void getRecipeIngredient(RecipeIngredient const&);
    void getCount(RecipeIngredient const&)const;
    void add(RecipeIngredient const&, int);
    void remove(RecipeIngredient const&, int);
    void getIngredients()const;
    namespace KeyHasher {

        void operator()(ItemDescriptor const&)const;
    };
};
