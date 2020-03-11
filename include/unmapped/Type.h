#pragma once

#include "./RecipeIngredient.h"
#include "../bedrock/block/BlockLegacy.h"
#include "./Block.h"
#include "./Type.h"
#include "../bedrock/item/Item.h"


namespace Recipes {

class Type {

public:

    Type(char, RecipeIngredient const&);
    ~Type();
    Type(char, Block const*);
    Type(char, BlockLegacy const*);
    Type(char, Item *);
    Type(Recipes::Type &&);
    Type(Recipes::Type const&);
};

}