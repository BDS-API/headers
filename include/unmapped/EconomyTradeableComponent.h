#pragma once

#include <string>
#include "./DataLoadHelper.h"
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


class EconomyTradeableComponent {

public:

    ~EconomyTradeableComponent();
    EconomyTradeableComponent(Actor &);
    void initFromDefinition();
    void reloadComponent();
    void _getTradeTable();
    void _setMaxTradeTier(int);
    void newServerAiStep();
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    void loadOffersFromTag(CompoundTag const*);
    void getInteraction(Player &, ActorInteraction &);
    void notifyTrade(int);
    void getTradeTier()const;
    void getMaxTradeTier()const;
    void setCurrentTradeExp(int);
    void getCurrentTradeExp()const;
    void _setTradeTier(int);
    void _getTradeTierFromCurrentExp();
    void _canLevelUp();
    void notifyTradeUpdated(ItemStack &, bool);
    void getOffers();
    void tryToTransferOldOffers(MerchantRecipeList *);
    void fixVillagerTierToMatchTradeList(MerchantRecipeList *);
    void matchExpAndTier();
    void _generateTrades();
    void setOffers(MerchantRecipeList *);
    std::string getDisplayName()const;
    std::string loadDisplayName();
    bool isMaxLevel()const;
    void getTradeExpRequirements()const;
    void getTradeExpForCurrentLevel()const;
    void getTradeExpToNextLevel()const;
//  void createDataPacket(ContainerID); //TODO: incomplete function definition
    void setDataFromPacket(UpdateTradePacket const&);
    void resupplyTrades();
    bool hasSupplyRemaining()const;
    void getRiches()const;
    void setRiches(int);
    void shouldPersistTrades()const;
    void shouldConvertTrades()const;
    void _rearrangeTradeList(std::vector<Trade, std::allocator<Trade>> &, unsigned long);
    void _calculateDemandPrices(int);
};
