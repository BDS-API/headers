#pragma once

#include <string>
#include "Recipe.h"
#include "../../../unmapped/HashString.h"


class MultiRecipe : Recipe {

public:
    ~MultiRecipe(); // _ZN11MultiRecipeD2Ev
    virtual bool isShapeless()const; // _ZNK11MultiRecipe11isShapelessEv
    virtual bool isMultiRecipe()const; // _ZNK11MultiRecipe13isMultiRecipeEv
    MultiRecipe(std::string, Util::HashString); // _ZN11MultiRecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN4Util10HashStringE
};
