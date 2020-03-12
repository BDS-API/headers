#pragma once

#include "../bedrock/item/ItemInstance.h"
#include "MerchantRecipe.h"
#include "../bedrock/nbt/CompoundTag.h"


class MerchantRecipeList {

public:
    virtual void addIfNewOrBetter(MerchantRecipe *);
    ~MerchantRecipeList();
    virtual void getMatchingRecipeFor(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    virtual void getRecipeFor(ItemInstance const&, ItemInstance const&, int);
    virtual void load(CompoundTag const&);
    virtual void createTag()const;
    MerchantRecipeList(CompoundTag const&);
    bool isRequiredItem(ItemInstance const&, ItemInstance const&);
    MerchantRecipeList();
};
