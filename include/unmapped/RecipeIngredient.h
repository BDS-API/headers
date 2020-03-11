#pragma once

#include "./RecipeIngredient.h"
#include "../bedrock/block/BlockLegacy.h"
#include "../bedrock/item/unmapped/ItemDescriptor.h"
#include "./Block.h"
#include "../bedrock/item/Item.h"


class RecipeIngredient {

public:
    static long EMPTY_INGREDIENT;


    ~RecipeIngredient();
    RecipeIngredient(RecipeIngredient const&);
    RecipeIngredient(RecipeIngredient &&);
    RecipeIngredient();
    RecipeIngredient(ItemDescriptor const&, unsigned short);
    RecipeIngredient(Block const&, unsigned short);
    RecipeIngredient(BlockLegacy const&, unsigned short);
    RecipeIngredient(Item const&, int, unsigned short);
};
