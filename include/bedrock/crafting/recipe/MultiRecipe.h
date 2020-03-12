#pragma once

#include <string>
#include "Recipe.h"
#include "../../../unmapped/HashString.h"


class MultiRecipe : Recipe {

public:
    virtual bool isMultiRecipe()const;
    ~MultiRecipe();
    virtual bool isShapeless()const;
    MultiRecipe(std::string, Util::HashString);
};
