#pragma once



class MerchantRecipeList {

public:
    ~MerchantRecipeList(); // _ZN18MerchantRecipeListD2Ev
    virtual void getRecipeFor(ItemInstance const&, ItemInstance const&, int); // _ZN18MerchantRecipeList12getRecipeForERK12ItemInstanceS2_i
    virtual void addIfNewOrBetter(MerchantRecipe *); // _ZN18MerchantRecipeList16addIfNewOrBetterEP14MerchantRecipe
    virtual void getMatchingRecipeFor(ItemInstance const&, ItemInstance const&, ItemInstance const&); // _ZN18MerchantRecipeList20getMatchingRecipeForERK12ItemInstanceS2_S2_
    virtual void load(CompoundTag const&); // _ZN18MerchantRecipeList4loadERK11CompoundTag
    virtual void createTag()const; // _ZNK18MerchantRecipeList9createTagEv
    MerchantRecipeList(); // _ZN18MerchantRecipeListC2Ev
    MerchantRecipeList(CompoundTag const&); // _ZN18MerchantRecipeListC2ERK11CompoundTag
    bool isRequiredItem(ItemInstance const&, ItemInstance const&); // _ZN18MerchantRecipeList14isRequiredItemERK12ItemInstanceS2_
};
