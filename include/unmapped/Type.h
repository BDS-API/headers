#pragma once

#include "../bedrock/block/BlockLegacy"
#include "../bedrock/item/Item"


using namespace Recipes;

class Type {

public:

    Type(char, RecipeIngredient const&);
    Type(char, Block const*);
    Type(char, BlockLegacy const*);
    Type(char, Item *);
    Type(Recipes::Type&&);
    Type(Recipes::Type const&);
};
