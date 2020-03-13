#pragma once



class RecipeIngredient {

public:
    static long EMPTY_INGREDIENT;

    ~RecipeIngredient(); // _ZN16RecipeIngredientD2Ev
    RecipeIngredient(RecipeIngredient const&); // _ZN16RecipeIngredientC2ERKS_
    RecipeIngredient(RecipeIngredient &&); // _ZN16RecipeIngredientC2EOS_
    RecipeIngredient(); // _ZN16RecipeIngredientC2Ev
    RecipeIngredient(ItemDescriptor const&, unsigned short); // _ZN16RecipeIngredientC2ERK14ItemDescriptort
    RecipeIngredient(Block const&, unsigned short); // _ZN16RecipeIngredientC2ERK5Blockt
    RecipeIngredient(BlockLegacy const&, unsigned short); // _ZN16RecipeIngredientC2ERK11BlockLegacyt
    RecipeIngredient(Item const&, int, unsigned short); // _ZN16RecipeIngredientC2ERK4Itemit
};
