#pragma once

#include "../../../unmapped/HashString"


class MultiRecipe : Recipe {

public:
    MultiRecipe::~MultiRecipe()
    virtual bool isShapeless()const;
    virtual bool isMultiRecipe()const;

    MultiRecipe(std::string, Util::HashString);
};
