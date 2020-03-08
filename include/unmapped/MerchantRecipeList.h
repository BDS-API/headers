#pragma once

#include "../bedrock/item/ItemInstance"
#include "../bedrock/nbt/CompoundTag"


class MerchantRecipeList {

public:
    MerchantRecipeList::~MerchantRecipeList()
    virtual void getRecipeFor(ItemInstance const&, ItemInstance const&, int);
    virtual void addIfNewOrBetter(MerchantRecipe *);
    virtual void getMatchingRecipeFor(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    virtual void load(CompoundTag const&);
    virtual void createTag()const;

    MerchantRecipeList(void);
    MerchantRecipeList(CompoundTag const&);
    bool isRequiredItem(ItemInstance const&, ItemInstance const&);
};
