#pragma once

class LegacyTradeableComponent {

public:

    void initFromDefinition(Actor &);
    void reloadComponent(Actor &);
    void _getTradeTable(Actor &);
    void _updateMaxTradeTier(Actor &, int);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void updateTradeTier(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void getOffers(Actor &);
    void _refreshTrades(Actor &);
    void setOffers(MerchantRecipeList *);
    void loadOffersFromTag(CompoundTag const*);
    void getResetLockedOnFirstTrade(void)const;
    void setResetLockedOnFirstTrade(bool);
    void getTradeTier(void)const;
    void setTradeTier(int);
    void getUpdateMerchantTimer(void)const;
    void getLastPlayerTradeName(void)const;
    void getAddRecipeOnUpdate(void)const;
    void setAddRecipeOnUpdate(bool);
    void getRiches(void)const;
    void setRiches(int);
    void getWillingToBreed(void)const;
    void setWillingToBreed(bool);
    void IncrementTradeTier(void);
    void DecrementMerchantTimer(void);
    void notifyTrade(Actor &, int);
    void _runOnServerCheckForFirstTimeTrade(int);
    void notifyTradeUpdated(Actor &, ItemStack &, bool);
    void createDataPacket(Actor &, ContainerID);
    void setDataFromPacket(Actor &, UpdateTradePacket const&);
    void restockAllRecipes(Actor &);
    void shouldPersistTrades(Actor &)const;
    void shouldConvertTrades(Actor &)const;
    void _rearrangeTradeList(Actor &, std::vector<Trade, std::allocator<Trade>> &, unsigned long);
    LegacyTradeableComponent(LegacyTradeableComponent&&);
    LegacyTradeableComponent(void);
};
