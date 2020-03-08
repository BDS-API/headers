#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/item/ItemInstance"


class MerchantRecipeList {

public:
    virtual MerchantRecipeList::~MerchantRecipeList()
    virtual void getRecipeFor(ItemInstance const&, ItemInstance const&, int);
    virtual void addIfNewOrBetter(MerchantRecipe *);
    virtual void getMatchingRecipeFor(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    virtual void load(CompoundTag const&);
    virtual void createTag()const;

    MerchantRecipeList(void);
    MerchantRecipeList(CompoundTag const&);
    bool isRequiredItem(ItemInstance const&, ItemInstance const&);
};
