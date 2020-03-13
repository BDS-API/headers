#pragma once

#include <string>
#include <vector>


class LegacyTradeableComponent {

public:
    void initFromDefinition(Actor &); // _ZN24LegacyTradeableComponent18initFromDefinitionER5Actor
    void reloadComponent(Actor &); // _ZN24LegacyTradeableComponent15reloadComponentER5Actor
    void _getTradeTable(Actor &); // _ZN24LegacyTradeableComponent14_getTradeTableER5Actor
    void _updateMaxTradeTier(Actor &, int); // _ZN24LegacyTradeableComponent19_updateMaxTradeTierER5Actori
    void addAdditionalSaveData(CompoundTag &); // _ZN24LegacyTradeableComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN24LegacyTradeableComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void updateTradeTier(Actor &); // _ZN24LegacyTradeableComponent15updateTradeTierER5Actor
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN24LegacyTradeableComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    void getOffers(Actor &); // _ZN24LegacyTradeableComponent9getOffersER5Actor
    void _refreshTrades(Actor &); // _ZN24LegacyTradeableComponent14_refreshTradesER5Actor
    void setOffers(MerchantRecipeList *); // _ZN24LegacyTradeableComponent9setOffersEP18MerchantRecipeList
    void loadOffersFromTag(CompoundTag const*); // _ZN24LegacyTradeableComponent17loadOffersFromTagEPK11CompoundTag
    std::string getDisplayName()const; // _ZNK24LegacyTradeableComponent14getDisplayNameB5cxx11Ev
    std::string loadDisplayName(Actor &); // _ZN24LegacyTradeableComponent15loadDisplayNameB5cxx11ER5Actor
    void getResetLockedOnFirstTrade()const; // _ZNK24LegacyTradeableComponent26getResetLockedOnFirstTradeEv
    void setResetLockedOnFirstTrade(bool); // _ZN24LegacyTradeableComponent26setResetLockedOnFirstTradeEb
    void getTradeTier()const; // _ZNK24LegacyTradeableComponent12getTradeTierEv
    void setTradeTier(int); // _ZN24LegacyTradeableComponent12setTradeTierEi
    void getUpdateMerchantTimer()const; // _ZNK24LegacyTradeableComponent22getUpdateMerchantTimerEv
    void getLastPlayerTradeName()const; // _ZNK24LegacyTradeableComponent22getLastPlayerTradeNameEv
    void getAddRecipeOnUpdate()const; // _ZNK24LegacyTradeableComponent20getAddRecipeOnUpdateEv
    void setAddRecipeOnUpdate(bool); // _ZN24LegacyTradeableComponent20setAddRecipeOnUpdateEb
    void getRiches()const; // _ZNK24LegacyTradeableComponent9getRichesEv
    void setRiches(int); // _ZN24LegacyTradeableComponent9setRichesEi
    void getWillingToBreed()const; // _ZNK24LegacyTradeableComponent17getWillingToBreedEv
    void setWillingToBreed(bool); // _ZN24LegacyTradeableComponent17setWillingToBreedEb
    void IncrementTradeTier(); // _ZN24LegacyTradeableComponent18IncrementTradeTierEv
    void DecrementMerchantTimer(); // _ZN24LegacyTradeableComponent22DecrementMerchantTimerEv
    void notifyTrade(Actor &, int); // _ZN24LegacyTradeableComponent11notifyTradeER5Actori
    void _runOnServerCheckForFirstTimeTrade(int); // _ZN24LegacyTradeableComponent34_runOnServerCheckForFirstTimeTradeEi
    void notifyTradeUpdated(Actor &, ItemStack &, bool); // _ZN24LegacyTradeableComponent18notifyTradeUpdatedER5ActorR9ItemStackb
//  void createDataPacket(Actor &, ContainerID); //TODO: incomplete function definition // _ZN24LegacyTradeableComponent16createDataPacketER5Actor11ContainerID
    void setDataFromPacket(Actor &, UpdateTradePacket const&); // _ZN24LegacyTradeableComponent17setDataFromPacketER5ActorRK17UpdateTradePacket
    void restockAllRecipes(Actor &); // _ZN24LegacyTradeableComponent17restockAllRecipesER5Actor
    void shouldPersistTrades(Actor &)const; // _ZNK24LegacyTradeableComponent19shouldPersistTradesER5Actor
    void shouldConvertTrades(Actor &)const; // _ZNK24LegacyTradeableComponent19shouldConvertTradesER5Actor
    void _rearrangeTradeList(Actor &, std::vector<Trade> &, unsigned long); // _ZN24LegacyTradeableComponent19_rearrangeTradeListER5ActorRSt6vectorI5TradeSaIS3_EEm
    ~LegacyTradeableComponent(); // _ZN24LegacyTradeableComponentD2Ev
    LegacyTradeableComponent(LegacyTradeableComponent &&); // _ZN24LegacyTradeableComponentC2EOS_
    LegacyTradeableComponent(); // _ZN24LegacyTradeableComponentC2Ev
};
