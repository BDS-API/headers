#pragma once

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
