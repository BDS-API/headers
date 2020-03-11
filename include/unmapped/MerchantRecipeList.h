#pragma once

#include "./MerchantRecipe.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/item/ItemInstance.h"


class MerchantRecipeList {

public:
    virtual ~MerchantRecipeList();
    virtual void getRecipeFor(ItemInstance const&, ItemInstance const&, int);
    virtual void addIfNewOrBetter(MerchantRecipe *);
    virtual void getMatchingRecipeFor(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    virtual void load(CompoundTag const&);
    virtual void createTag()const;

    MerchantRecipeList();
    MerchantRecipeList(CompoundTag const&);
    bool isRequiredItem(ItemInstance const&, ItemInstance const&);
};
