#pragma once

#include <string>
#include <vector>


class EconomyTradeableComponent {

public:
    ~EconomyTradeableComponent(); // _ZN25EconomyTradeableComponentD2Ev
    EconomyTradeableComponent(Actor &); // _ZN25EconomyTradeableComponentC2ER5Actor
    void initFromDefinition(); // _ZN25EconomyTradeableComponent18initFromDefinitionEv
    void reloadComponent(); // _ZN25EconomyTradeableComponent15reloadComponentEv
    void _getTradeTable(); // _ZN25EconomyTradeableComponent14_getTradeTableEv
    void _setMaxTradeTier(int); // _ZN25EconomyTradeableComponent16_setMaxTradeTierEi
    void newServerAiStep(); // _ZN25EconomyTradeableComponent15newServerAiStepEv
    void addAdditionalSaveData(CompoundTag &); // _ZN25EconomyTradeableComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN25EconomyTradeableComponent22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    void loadOffersFromTag(CompoundTag const*); // _ZN25EconomyTradeableComponent17loadOffersFromTagEPK11CompoundTag
    void getInteraction(Player &, ActorInteraction &); // _ZN25EconomyTradeableComponent14getInteractionER6PlayerR16ActorInteraction
    void notifyTrade(int); // _ZN25EconomyTradeableComponent11notifyTradeEi
    void getTradeTier()const; // _ZNK25EconomyTradeableComponent12getTradeTierEv
    void getMaxTradeTier()const; // _ZNK25EconomyTradeableComponent15getMaxTradeTierEv
    void setCurrentTradeExp(int); // _ZN25EconomyTradeableComponent18setCurrentTradeExpEi
    void getCurrentTradeExp()const; // _ZNK25EconomyTradeableComponent18getCurrentTradeExpEv
    void _setTradeTier(int); // _ZN25EconomyTradeableComponent13_setTradeTierEi
    void _getTradeTierFromCurrentExp(); // _ZN25EconomyTradeableComponent27_getTradeTierFromCurrentExpEv
    void _canLevelUp(); // _ZN25EconomyTradeableComponent11_canLevelUpEv
    void notifyTradeUpdated(ItemStack &, bool); // _ZN25EconomyTradeableComponent18notifyTradeUpdatedER9ItemStackb
    void getOffers(); // _ZN25EconomyTradeableComponent9getOffersEv
    void tryToTransferOldOffers(MerchantRecipeList *); // _ZN25EconomyTradeableComponent22tryToTransferOldOffersEP18MerchantRecipeList
    void fixVillagerTierToMatchTradeList(MerchantRecipeList *); // _ZN25EconomyTradeableComponent31fixVillagerTierToMatchTradeListEP18MerchantRecipeList
    void matchExpAndTier(); // _ZN25EconomyTradeableComponent15matchExpAndTierEv
    void _generateTrades(); // _ZN25EconomyTradeableComponent15_generateTradesEv
    void setOffers(MerchantRecipeList *); // _ZN25EconomyTradeableComponent9setOffersEP18MerchantRecipeList
    std::string getDisplayName()const; // _ZNK25EconomyTradeableComponent14getDisplayNameB5cxx11Ev
    std::string loadDisplayName(); // _ZN25EconomyTradeableComponent15loadDisplayNameB5cxx11Ev
    bool isMaxLevel()const; // _ZNK25EconomyTradeableComponent10isMaxLevelEv
    void getTradeExpRequirements()const; // _ZNK25EconomyTradeableComponent23getTradeExpRequirementsEv
    void getTradeExpForCurrentLevel()const; // _ZNK25EconomyTradeableComponent26getTradeExpForCurrentLevelEv
    void getTradeExpToNextLevel()const; // _ZNK25EconomyTradeableComponent22getTradeExpToNextLevelEv
//  void createDataPacket(ContainerID); //TODO: incomplete function definition // _ZN25EconomyTradeableComponent16createDataPacketE11ContainerID
    void setDataFromPacket(UpdateTradePacket const&); // _ZN25EconomyTradeableComponent17setDataFromPacketERK17UpdateTradePacket
    void resupplyTrades(); // _ZN25EconomyTradeableComponent14resupplyTradesEv
    bool hasSupplyRemaining()const; // _ZNK25EconomyTradeableComponent18hasSupplyRemainingEv
    void getRiches()const; // _ZNK25EconomyTradeableComponent9getRichesEv
    void setRiches(int); // _ZN25EconomyTradeableComponent9setRichesEi
    void shouldPersistTrades()const; // _ZNK25EconomyTradeableComponent19shouldPersistTradesEv
    void shouldConvertTrades()const; // _ZNK25EconomyTradeableComponent19shouldConvertTradesEv
    void _rearrangeTradeList(std::vector<Trade> &, unsigned long); // _ZN25EconomyTradeableComponent19_rearrangeTradeListERSt6vectorI5TradeSaIS1_EEm
    void _calculateDemandPrices(int); // _ZN25EconomyTradeableComponent22_calculateDemandPricesEi
};
