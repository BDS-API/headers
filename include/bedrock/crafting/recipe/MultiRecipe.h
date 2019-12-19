#pragma once

class MultiRecipe : Recipe {

public:
    virtual MultiRecipe::~MultiRecipe();
    virtual bool isShapeless(void)const;
    virtual bool isMultiRecipe(void)const;

    MultiRecipe(std::string, Util::HashString);
};
