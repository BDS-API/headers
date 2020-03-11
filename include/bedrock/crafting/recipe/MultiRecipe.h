#pragma once

#include "./Recipe.h"
#include "../../../unmapped/HashString.h"
#include <string>


class MultiRecipe : Recipe {

public:
    virtual ~MultiRecipe();
    virtual bool isShapeless()const;
    virtual bool isMultiRecipe()const;

    MultiRecipe(std::string, Util::HashString);
};
