#pragma once

class EconomyTradeableComponent {

public:

    EconomyTradeableComponent(Actor &);
    void initFromDefinition(void);
    void reloadComponent(void);
    void _getTradeTable(void);
    void _setMaxTradeTier(int);
    void newServerAiStep(void);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    void loadOffersFromTag(CompoundTag const*);
    void getInteraction(Player &, ActorInteraction &);
    void notifyTrade(int);
    void getTradeTier(void)const;
    void getMaxTradeTier(void)const;
    void setCurrentTradeExp(int);
    void getCurrentTradeExp(void)const;
    void _setTradeTier(int);
    void _getTradeTierFromCurrentExp(void);
    void _canLevelUp(void);
    void notifyTradeUpdated(ItemStack &, bool);
    void getOffers(void);
    void tryToTransferOldOffers(MerchantRecipeList *);
    void fixVillagerTierToMatchTradeList(MerchantRecipeList *);
    void matchExpAndTier(void);
    void _generateTrades(void);
    void setOffers(MerchantRecipeList *);
    bool isMaxLevel(void)const;
    void getTradeExpRequirements(void)const;
    void getTradeExpForCurrentLevel(void)const;
    void getTradeExpToNextLevel(void)const;
    void createDataPacket(ContainerID);
    void setDataFromPacket(UpdateTradePacket const&);
    void resupplyTrades(void);
    bool hasSupplyRemaining(void)const;
    void getRiches(void)const;
    void setRiches(int);
    void shouldPersistTrades(void)const;
    void shouldConvertTrades(void)const;
    void _rearrangeTradeList(std::vector<Trade, std::allocator<Trade>> &, unsigned long);
    void _calculateDemandPrices(int);
};
