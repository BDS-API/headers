#pragma once

#include "Block.h"
#include "../bedrock/item/Item.h"
#include "../bedrock/item/unmapped/ItemDescriptor.h"
#include "../bedrock/block/BlockLegacy.h"


class RecipeIngredient {

public:
    static long EMPTY_INGREDIENT;

    RecipeIngredient();
    RecipeIngredient(Item const&, int, unsigned short);
    RecipeIngredient(RecipeIngredient const&);
    RecipeIngredient(Block const&, unsigned short);
    RecipeIngredient(RecipeIngredient &&);
    ~RecipeIngredient();
    RecipeIngredient(ItemDescriptor const&, unsigned short);
    RecipeIngredient(BlockLegacy const&, unsigned short);
};
