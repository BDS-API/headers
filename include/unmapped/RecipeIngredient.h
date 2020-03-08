#pragma once

#include "../bedrock/block/BlockLegacy"
#include "../bedrock/item/Item"
#include "../bedrock/item/unmapped/ItemDescriptor"


class RecipeIngredient {

public:
    static long EMPTY_INGREDIENT;


    RecipeIngredient(RecipeIngredient const&);
    RecipeIngredient(RecipeIngredient&&);
    RecipeIngredient(void);
    RecipeIngredient(ItemDescriptor const&, unsigned short);
    RecipeIngredient(Block const&, unsigned short);
    RecipeIngredient(BlockLegacy const&, unsigned short);
    RecipeIngredient(Item const&, int, unsigned short);
};
