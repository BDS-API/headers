#pragma once

class Recipes::FurnaceRecipeKey {

public:

    void FurnaceRecipeKey(Recipes::FurnaceRecipeKey const&);
    void FurnaceRecipeKey(int, Util::HashString const&);
    void FurnaceRecipeKey(Recipes::FurnaceRecipeKey&&);
};
