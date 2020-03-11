#pragma once

#include <string>
#include "./DataLoadHelper.h"
#include "./LegacyTradeableComponent.h"
#include "./Trade.h"
#include <memory>
#include "../bedrock/nbt/CompoundTag.h"
#include "./MerchantRecipeList.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include <vector>
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/network/packet/UpdateTradePacket.h"


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
    std::string getDisplayName()const;
    std::string loadDisplayName(Actor &);
    void getResetLockedOnFirstTrade()const;
    void setResetLockedOnFirstTrade(bool);
    void getTradeTier()const;
    void setTradeTier(int);
    void getUpdateMerchantTimer()const;
    void getLastPlayerTradeName()const;
    void getAddRecipeOnUpdate()const;
    void setAddRecipeOnUpdate(bool);
    void getRiches()const;
    void setRiches(int);
    void getWillingToBreed()const;
    void setWillingToBreed(bool);
    void IncrementTradeTier();
    void DecrementMerchantTimer();
    void notifyTrade(Actor &, int);
    void _runOnServerCheckForFirstTimeTrade(int);
    void notifyTradeUpdated(Actor &, ItemStack &, bool);
//  void createDataPacket(Actor &, ContainerID); //TODO: incomplete function definition
    void setDataFromPacket(Actor &, UpdateTradePacket const&);
    void restockAllRecipes(Actor &);
    void shouldPersistTrades(Actor &)const;
    void shouldConvertTrades(Actor &)const;
    void _rearrangeTradeList(Actor &, std::vector<Trade, std::allocator<Trade>> &, unsigned long);
    ~LegacyTradeableComponent();
    LegacyTradeableComponent(LegacyTradeableComponent &&);
    LegacyTradeableComponent();
};
