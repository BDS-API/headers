#pragma once



class MerchantRecipe {

public:
    ~MerchantRecipe(); // _ZN14MerchantRecipeD2Ev
    MerchantRecipe(MerchantRecipe const&); // _ZN14MerchantRecipeC2ERKS_
    MerchantRecipe(CompoundTag const*); // _ZN14MerchantRecipeC2EPK11CompoundTag
    void load(CompoundTag const*); // _ZN14MerchantRecipe4loadEPK11CompoundTag
    MerchantRecipe(ItemInstance const&, ItemInstance const&, ItemInstance const&); // _ZN14MerchantRecipeC2ERK12ItemInstanceS2_S2_
    void init(ItemInstance const&, ItemInstance const&, ItemInstance const&); // _ZN14MerchantRecipe4initERK12ItemInstanceS2_S2_
    MerchantRecipe(ItemInstance const&, ItemInstance const&); // _ZN14MerchantRecipeC2ERK12ItemInstanceS2_
    void getBuyAItem()const; // _ZNK14MerchantRecipe11getBuyAItemEv
    void getBuyBItem()const; // _ZNK14MerchantRecipe11getBuyBItemEv
    void getSellItem()const; // _ZNK14MerchantRecipe11getSellItemEv
    bool hasSecondaryBuyItem()const; // _ZNK14MerchantRecipe19hasSecondaryBuyItemEv
    bool isSame(MerchantRecipe &)const; // _ZNK14MerchantRecipe6isSameERS_
    bool isSameButBetter(MerchantRecipe &)const; // _ZNK14MerchantRecipe15isSameButBetterERS_
    void getUses()const; // _ZNK14MerchantRecipe7getUsesEv
    void getMaxUses()const; // _ZNK14MerchantRecipe10getMaxUsesEv
    void getTier()const; // _ZNK14MerchantRecipe7getTierEv
    void getTraderExp()const; // _ZNK14MerchantRecipe12getTraderExpEv
    void getDemand()const; // _ZNK14MerchantRecipe9getDemandEv
    void getBaseCountA()const; // _ZNK14MerchantRecipe13getBaseCountAEv
    void getBaseCountB()const; // _ZNK14MerchantRecipe13getBaseCountBEv
    void increaseUses(); // _ZN14MerchantRecipe12increaseUsesEv
    void increaseMaxUses(int); // _ZN14MerchantRecipe15increaseMaxUsesEi
    bool isOutOfUses()const; // _ZNK14MerchantRecipe11isOutOfUsesEv
    void shouldRewardExp()const; // _ZNK14MerchantRecipe15shouldRewardExpEv
    void setUses(int); // _ZN14MerchantRecipe7setUsesEi
    void setMaxUses(int); // _ZN14MerchantRecipe10setMaxUsesEi
    void setRewardExp(bool); // _ZN14MerchantRecipe12setRewardExpEb
    void setTraderExp(unsigned int); // _ZN14MerchantRecipe12setTraderExpEj
    void setTier(int); // _ZN14MerchantRecipe7setTierEi
    void setDemand(int); // _ZN14MerchantRecipe9setDemandEi
    void setPriceMultiplierA(float); // _ZN14MerchantRecipe19setPriceMultiplierAEf
    void setPriceMultiplierB(float); // _ZN14MerchantRecipe19setPriceMultiplierBEf
    void calculateDemandPrices(int); // _ZN14MerchantRecipe21calculateDemandPricesEi
    void createTag()const; // _ZNK14MerchantRecipe9createTagEv
    MerchantRecipe(MerchantRecipe &&); // _ZN14MerchantRecipeC2EOS_
};
