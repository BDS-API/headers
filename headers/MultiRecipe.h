#pragma once

class MultiRecipe : Recipe {

public:
    virtual ~MultiRecipe();
    virtual bool isShapeless(void)const;
    virtual bool isMultiRecipe(void)const;

    void MultiRecipe(std::string, Util::HashString);
};
