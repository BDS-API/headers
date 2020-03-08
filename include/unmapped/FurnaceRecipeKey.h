#pragma once



using namespace Recipes;

class FurnaceRecipeKey {

public:

    FurnaceRecipeKey(Recipes::FurnaceRecipeKey const&);
    FurnaceRecipeKey(int, Util::HashString const&);
    FurnaceRecipeKey(Recipes::FurnaceRecipeKey&&);
};
