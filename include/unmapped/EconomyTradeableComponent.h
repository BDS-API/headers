#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Player"
#include "../bedrock/item/ItemStack"
#include "../bedrock/network/packet/UpdateTradePacket"
#include "../bedrock/actor/unmapped/ActorInteraction"


class EconomyTradeableComponent {

public:

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
    bool isMaxLevel()const;
    void getTradeExpRequirements()const;
    void getTradeExpForCurrentLevel()const;
    void getTradeExpToNextLevel()const;
    void createDataPacket(ContainerID);
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
