#pragma once



class MerchantRecipeList {

public:
    ~MerchantRecipeList();
    virtual void load(CompoundTag const&);
    virtual void addIfNewOrBetter(MerchantRecipe *);
    virtual void createTag()const;
    virtual void getMatchingRecipeFor(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    virtual void getRecipeFor(ItemInstance const&, ItemInstance const&, int);
    bool isRequiredItem(ItemInstance const&, ItemInstance const&);
    MerchantRecipeList();
    MerchantRecipeList(CompoundTag const&);
};
