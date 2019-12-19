#pragma once

class RecipeIngredient {

public:
    static long EMPTY_INGREDIENT;


    void RecipeIngredient(RecipeIngredient const&);
    void RecipeIngredient(RecipeIngredient&&);
    void RecipeIngredient(void);
    void RecipeIngredient(ItemDescriptor const&, unsigned short);
    void RecipeIngredient(Block const&, unsigned short);
    void RecipeIngredient(BlockLegacy const&, unsigned short);
    void RecipeIngredient(Item const&, int, unsigned short);
};
