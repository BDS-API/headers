#pragma once

#include "../bedrock/item/ItemInstance"
#include "../bedrock/nbt/CompoundTag"


class MerchantRecipe {

public:

    MerchantRecipe(MerchantRecipe const&);
    MerchantRecipe(CompoundTag const*);
    void load(CompoundTag const*);
    MerchantRecipe(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    void init(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    MerchantRecipe(ItemInstance const&, ItemInstance const&);
    void getBuyAItem()const;
    void getBuyBItem()const;
    void getSellItem()const;
    bool hasSecondaryBuyItem()const;
    bool isSame(MerchantRecipe&)const;
    bool isSameButBetter(MerchantRecipe&)const;
    void getUses()const;
    void getMaxUses()const;
    void getTier()const;
    void getTraderExp()const;
    void getDemand()const;
    void getBaseCountA()const;
    void getBaseCountB()const;
    void increaseUses();
    void increaseMaxUses(int);
    bool isOutOfUses()const;
    void shouldRewardExp()const;
    void setUses(int);
    void setMaxUses(int);
    void setRewardExp(bool);
    void setTraderExp(unsigned int);
    void setTier(int);
    void setDemand(int);
    void setPriceMultiplierA(float);
    void setPriceMultiplierB(float);
    void calculateDemandPrices(int);
    void createTag()const;
    MerchantRecipe(MerchantRecipe&&);
};
