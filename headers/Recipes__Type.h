#pragma once

class Recipes::Type {

public:

    void Type(char, RecipeIngredient const&);
    void Type(char, Block const*);
    void Type(char, BlockLegacy const*);
    void Type(char, Item *);
    void Type(Recipes::Type&&);
    void Type(Recipes::Type const&);
};
