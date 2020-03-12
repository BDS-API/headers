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


class EconomyTradeableComponent {

public:
    void getCurrentTradeExp()const;
    void setOffers(MerchantRecipeList *);
    void notifyTrade(int);
    bool hasSupplyRemaining()const;
    void _generateTrades();
    void _setMaxTradeTier(int);
    void fixVillagerTierToMatchTradeList(MerchantRecipeList *);
    void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    void _setTradeTier(int);
    void addAdditionalSaveData(CompoundTag &);
    void _canLevelUp();
    EconomyTradeableComponent(Actor &);
    void getTradeExpRequirements()const;
    void getTradeExpForCurrentLevel()const;
    bool isMaxLevel()const;
    std::string getDisplayName()const;
    void getOffers();
    void _rearrangeTradeList(std::vector<Trade> &, unsigned long);
    void loadOffersFromTag(CompoundTag const*);
    void _calculateDemandPrices(int);
    void setDataFromPacket(UpdateTradePacket const&);
    void getMaxTradeTier()const;
    void resupplyTrades();
    void shouldConvertTrades()const;
    void shouldPersistTrades()const;
    void getRiches()const;
    void reloadComponent();
    void initFromDefinition();
    void notifyTradeUpdated(ItemStack &, bool);
    void newServerAiStep();
    ~EconomyTradeableComponent();
    std::string loadDisplayName();
    void setRiches(int);
    void tryToTransferOldOffers(MerchantRecipeList *);
    void getTradeExpToNextLevel()const;
    void _getTradeTable();
    void getInteraction(Player &, ActorInteraction &);
    void matchExpAndTier();
    void _getTradeTierFromCurrentExp();
    void setCurrentTradeExp(int);
    void getTradeTier()const;
//  void createDataPacket(ContainerID); //TODO: incomplete function definition
};
