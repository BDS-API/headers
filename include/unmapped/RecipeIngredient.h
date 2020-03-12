#pragma once



class RecipeIngredient {

public:
    static long EMPTY_INGREDIENT;

    RecipeIngredient(RecipeIngredient &&);
    RecipeIngredient(Block const&, unsigned short);
    RecipeIngredient(RecipeIngredient const&);
    ~RecipeIngredient();
    RecipeIngredient(BlockLegacy const&, unsigned short);
    RecipeIngredient(Item const&, int, unsigned short);
    RecipeIngredient();
    RecipeIngredient(ItemDescriptor const&, unsigned short);
};
