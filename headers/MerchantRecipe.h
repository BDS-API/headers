#pragma once

class MerchantRecipe {

public:

    void MerchantRecipe(MerchantRecipe const&);
    void MerchantRecipe(CompoundTag const*);
    void load(CompoundTag const*);
    void MerchantRecipe(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    void init(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    void MerchantRecipe(ItemInstance const&, ItemInstance const&);
    void getBuyAItem(void)const;
    void getBuyBItem(void)const;
    void getSellItem(void)const;
    bool hasSecondaryBuyItem(void)const;
    bool isSame(MerchantRecipe&)const;
    bool isSameButBetter(MerchantRecipe&)const;
    void getUses(void)const;
    void getMaxUses(void)const;
    void getTier(void)const;
    void getTraderExp(void)const;
    void getDemand(void)const;
    void getBaseCountA(void)const;
    void getBaseCountB(void)const;
    void increaseUses(void);
    void increaseMaxUses(int);
    bool isOutOfUses(void)const;
    void shouldRewardExp(void)const;
    void setUses(int);
    void setMaxUses(int);
    void setRewardExp(bool);
    void setTraderExp(unsigned int);
    void setTier(int);
    void setDemand(int);
    void setPriceMultiplierA(float);
    void setPriceMultiplierB(float);
    void calculateDemandPrices(int);
    void createTag(void)const;
    void MerchantRecipe(MerchantRecipe&&);
};
