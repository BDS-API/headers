#pragma once

#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/nbt/CompoundTag.h"


class MerchantRecipe {

public:
    bool isOutOfUses()const;
    bool isSameButBetter(MerchantRecipe &)const;
    void createTag()const;
    void load(CompoundTag const*);
    MerchantRecipe(MerchantRecipe &&);
    void getMaxUses()const;
    void calculateDemandPrices(int);
    void init(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    void setUses(int);
    void setTraderExp(unsigned int);
    void getDemand()const;
    MerchantRecipe(CompoundTag const*);
    void setPriceMultiplierA(float);
    void getTier()const;
    void increaseMaxUses(int);
    void setTier(int);
    void getBaseCountB()const;
    MerchantRecipe(MerchantRecipe const&);
    void getBuyAItem()const;
    void setMaxUses(int);
    void getBaseCountA()const;
    MerchantRecipe(ItemInstance const&, ItemInstance const&);
    void getUses()const;
    void setPriceMultiplierB(float);
    bool isSame(MerchantRecipe &)const;
    void setRewardExp(bool);
    MerchantRecipe(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    void shouldRewardExp()const;
    void getTraderExp()const;
    void getSellItem()const;
    void setDemand(int);
    ~MerchantRecipe();
    bool hasSecondaryBuyItem()const;
    void increaseUses();
    void getBuyBItem()const;
};
