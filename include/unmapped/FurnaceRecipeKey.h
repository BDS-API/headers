#pragma once

#include "./HashString.h"
#include "./FurnaceRecipeKey.h"


namespace Recipes {

class FurnaceRecipeKey {

public:

    FurnaceRecipeKey(Recipes::FurnaceRecipeKey const&);
    ~FurnaceRecipeKey();
    FurnaceRecipeKey(int, Util::HashString const&);
    FurnaceRecipeKey(Recipes::FurnaceRecipeKey &&);
    void operator<(Recipes::FurnaceRecipeKey const&)const;
};

}