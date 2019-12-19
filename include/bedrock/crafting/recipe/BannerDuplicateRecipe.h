#pragma once

class BannerDuplicateRecipe : MultiRecipe {

public:
    static long ID;

    virtual BannerDuplicateRecipe::~BannerDuplicateRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    BannerDuplicateRecipe(std::string);
    BannerDuplicateRecipe(std::string, mce::UUID const&);
};
