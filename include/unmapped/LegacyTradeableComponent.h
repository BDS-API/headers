#pragma once

#include <string>
#include <vector>


class LegacyTradeableComponent {

public:
    void setWillingToBreed(bool);
    void shouldConvertTrades(Actor &)const;
    void loadOffersFromTag(CompoundTag const*);
    void notifyTradeUpdated(Actor &, ItemStack &, bool);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getLastPlayerTradeName()const;
    void setAddRecipeOnUpdate(bool);
    void getRiches()const;
    void getUpdateMerchantTimer()const;
    void getTradeTier()const;
    std::string loadDisplayName(Actor &);
    void setRiches(int);
    ~LegacyTradeableComponent();
    void _refreshTrades(Actor &);
    void getResetLockedOnFirstTrade()const;
    void getAddRecipeOnUpdate()const;
    void updateTradeTier(Actor &);
    void _rearrangeTradeList(Actor &, std::vector<Trade> &, unsigned long);
    void shouldPersistTrades(Actor &)const;
    void setOffers(MerchantRecipeList *);
//  void createDataPacket(Actor &, ContainerID); //TODO: incomplete function definition
    void getOffers(Actor &);
    void DecrementMerchantTimer();
    void IncrementTradeTier();
    LegacyTradeableComponent(LegacyTradeableComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _runOnServerCheckForFirstTimeTrade(int);
    LegacyTradeableComponent();
    void _getTradeTable(Actor &);
    void setResetLockedOnFirstTrade(bool);
    void setDataFromPacket(Actor &, UpdateTradePacket const&);
    void initFromDefinition(Actor &);
    void notifyTrade(Actor &, int);
    std::string getDisplayName()const;
    void setTradeTier(int);
    void restockAllRecipes(Actor &);
    void _updateMaxTradeTier(Actor &, int);
    void getWillingToBreed()const;
    void reloadComponent(Actor &);
};
