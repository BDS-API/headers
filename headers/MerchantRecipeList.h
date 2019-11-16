#pragma once

class MerchantRecipeList {

    virtual void MerchantRecipeList::~MerchantRecipeList();
    virtual void MerchantRecipeList::~MerchantRecipeList();
    virtual void getRecipeFor(ItemInstance const&, ItemInstance const&, int);
    virtual void addIfNewOrBetter(MerchantRecipe *);
    virtual void getMatchingRecipeFor(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    virtual void load(CompoundTag const&);
    virtual void createTag(void)const;
}
