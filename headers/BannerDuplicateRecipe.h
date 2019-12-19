#pragma once

class BannerDuplicateRecipe : MultiRecipe {

public:
    static long ID;

    virtual ~BannerDuplicateRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    void BannerDuplicateRecipe(std::string);
    void BannerDuplicateRecipe(std::string, mce::UUID const&);
};
