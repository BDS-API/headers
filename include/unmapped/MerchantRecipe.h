#pragma once



class MerchantRecipe {

public:
    void increaseMaxUses(int);
    MerchantRecipe(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    void getMaxUses()const;
    void getBaseCountB()const;
    void getSellItem()const;
    void shouldRewardExp()const;
    void load(CompoundTag const*);
    void setTier(int);
    void setDemand(int);
    void getTier()const;
    void setTraderExp(unsigned int);
    void setUses(int);
    MerchantRecipe(CompoundTag const*);
    void createTag()const;
    void setRewardExp(bool);
    void setPriceMultiplierA(float);
    void increaseUses();
    void init(ItemInstance const&, ItemInstance const&, ItemInstance const&);
    void getBuyAItem()const;
    void setPriceMultiplierB(float);
    MerchantRecipe(MerchantRecipe &&);
    void getUses()const;
    void getBaseCountA()const;
    void setMaxUses(int);
    MerchantRecipe(ItemInstance const&, ItemInstance const&);
    bool isOutOfUses()const;
    void getDemand()const;
    bool isSameButBetter(MerchantRecipe &)const;
    MerchantRecipe(MerchantRecipe const&);
    void calculateDemandPrices(int);
    ~MerchantRecipe();
    void getTraderExp()const;
    void getBuyBItem()const;
    bool hasSecondaryBuyItem()const;
    bool isSame(MerchantRecipe &)const;
};
