#pragma once

#include <string>
#include "../../../unmapped/HashString.h"
#include "Recipe.h"


class MultiRecipe : Recipe {

public:
    virtual bool isMultiRecipe()const;
    virtual bool isShapeless()const;
    ~MultiRecipe();
    MultiRecipe(std::string, Util::HashString);
};
