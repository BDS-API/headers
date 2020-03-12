#pragma once

#include <string>
#include <vector>


class EconomyTradeableComponent {

public:
    void _calculateDemandPrices(int);
    void setDataFromPacket(UpdateTradePacket const&);
    void reloadComponent();
    void getTradeTier()const;
    void matchExpAndTier();
    void getCurrentTradeExp()const;
    void tryToTransferOldOffers(MerchantRecipeList *);
//  void createDataPacket(ContainerID); //TODO: incomplete function definition
    void getMaxTradeTier()const;
    std::string loadDisplayName();
    void shouldPersistTrades()const;
    void _rearrangeTradeList(std::vector<Trade> &, unsigned long);
    void shouldConvertTrades()const;
    void getRiches()const;
    bool hasSupplyRemaining()const;
    std::string getDisplayName()const;
    void loadOffersFromTag(CompoundTag const*);
    void _setTradeTier(int);
    void getInteraction(Player &, ActorInteraction &);
    void resupplyTrades();
    void setOffers(MerchantRecipeList *);
    void addAdditionalSaveData(CompoundTag &);
    void setCurrentTradeExp(int);
    void getTradeExpToNextLevel()const;
    ~EconomyTradeableComponent();
    void notifyTrade(int);
    void newServerAiStep();
    EconomyTradeableComponent(Actor &);
    void _setMaxTradeTier(int);
    void notifyTradeUpdated(ItemStack &, bool);
    void _generateTrades();
    void _canLevelUp();
    void initFromDefinition();
    bool isMaxLevel()const;
    void _getTradeTierFromCurrentExp();
    void setRiches(int);
    void _getTradeTable();
    void fixVillagerTierToMatchTradeList(MerchantRecipeList *);
    void getOffers();
    void getTradeExpForCurrentLevel()const;
    void getTradeExpRequirements()const;
    void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
};
