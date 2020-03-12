#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/network/packet/UpdateTradePacket.h"
#include "Trade.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "DataLoadHelper.h"
#include "MerchantRecipeList.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class LegacyTradeableComponent {

public:
    void notifyTradeUpdated(Actor &, ItemStack &, bool);
    LegacyTradeableComponent(LegacyTradeableComponent &&);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
//  void createDataPacket(Actor &, ContainerID); //TODO: incomplete function definition
    void getOffers(Actor &);
    void _refreshTrades(Actor &);
    void getResetLockedOnFirstTrade()const;
    void _updateMaxTradeTier(Actor &, int);
    void updateTradeTier(Actor &);
    void setTradeTier(int);
    void shouldConvertTrades(Actor &)const;
    void reloadComponent(Actor &);
    void getLastPlayerTradeName()const;
    void setOffers(MerchantRecipeList *);
    void IncrementTradeTier();
    ~LegacyTradeableComponent();
    void getRiches()const;
    void shouldPersistTrades(Actor &)const;
    void getTradeTier()const;
    void setRiches(int);
    void setDataFromPacket(Actor &, UpdateTradePacket const&);
    void _rearrangeTradeList(Actor &, std::vector<Trade> &, unsigned long);
    void DecrementMerchantTimer();
    void getUpdateMerchantTimer()const;
    void loadOffersFromTag(CompoundTag const*);
    void setWillingToBreed(bool);
    void notifyTrade(Actor &, int);
    LegacyTradeableComponent();
    void initFromDefinition(Actor &);
    std::string loadDisplayName(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void _getTradeTable(Actor &);
    void getWillingToBreed()const;
    void _runOnServerCheckForFirstTimeTrade(int);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void setResetLockedOnFirstTrade(bool);
    std::string getDisplayName()const;
    void setAddRecipeOnUpdate(bool);
    void getAddRecipeOnUpdate()const;
    void restockAllRecipes(Actor &);
};
