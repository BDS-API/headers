#pragma once

#include <string>
#include "ContainerManagerModel.h"


class FurnaceContainerManagerModel : ContainerManagerModel {

public:
    ~FurnaceContainerManagerModel(); // _ZN28FurnaceContainerManagerModelD2Ev
    virtual void getItems(); // _ZN28FurnaceContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN28FurnaceContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN28FurnaceContainerManagerModel7getSlotEi
    virtual void setData(int, int); // _ZN28FurnaceContainerManagerModel7setDataEii
    virtual void broadcastChanges(); // _ZN28FurnaceContainerManagerModel16broadcastChangesEv
    virtual void init(); // _ZN28FurnaceContainerManagerModel4initEv
//  FurnaceContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition // _ZN28FurnaceContainerManagerModelC2E11ContainerIDR6PlayerRK8BlockPos
//  FurnaceContainerManagerModel(Util::HashString const&, ContainerType, BlockActorType, ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition // _ZN28FurnaceContainerManagerModelC2ERKN4Util10HashStringE13ContainerType14BlockActorType11ContainerIDR6PlayerRK8BlockPos
    void _getIngredientNameFromType(Util::HashString const&); // _ZN28FurnaceContainerManagerModel26_getIngredientNameFromTypeERKN4Util10HashStringE
    void _getFurnaceEntity(); // _ZN28FurnaceContainerManagerModel17_getFurnaceEntityEv
    void _updateResultSlotInfo(); // _ZN28FurnaceContainerManagerModel21_updateResultSlotInfoEv
    void getBurnProgress(int); // _ZN28FurnaceContainerManagerModel15getBurnProgressEi
    void getLitProgress(int); // _ZN28FurnaceContainerManagerModel14getLitProgressEi
    bool isFinished(std::string &, int &, int &); // _ZN28FurnaceContainerManagerModel10isFinishedERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERiS7_
    bool isFurnaceValid(float); // _ZN28FurnaceContainerManagerModel14isFurnaceValidEf
    void grantExperienceForSmelting(ItemInstance const&, int); // _ZN28FurnaceContainerManagerModel26grantExperienceForSmeltingERK12ItemInstancei
    void fireItemSmeltedEvent(ItemDescriptor const&); // _ZN28FurnaceContainerManagerModel20fireItemSmeltedEventERK14ItemDescriptor
    void fireItemAcquiredEvent(ItemInstance const&, int); // _ZN28FurnaceContainerManagerModel21fireItemAcquiredEventERK12ItemInstancei
    std::string getOutputName()const; // _ZNK28FurnaceContainerManagerModel13getOutputNameB5cxx11Ev
    void getOutputId()const; // _ZNK28FurnaceContainerManagerModel11getOutputIdEv
    void getBlockPos()const; // _ZNK28FurnaceContainerManagerModel11getBlockPosEv
    void getBlockActorType()const; // _ZNK28FurnaceContainerManagerModel17getBlockActorTypeEv
    void _onFurnaceIngredientSlotChanged(int, ItemStack const&, ItemStack const&); // _ZN28FurnaceContainerManagerModel31_onFurnaceIngredientSlotChangedEiRK9ItemStackS2_
    void _onFurnaceFuelSlotChanged(int, ItemStack const&, ItemStack const&); // _ZN28FurnaceContainerManagerModel25_onFurnaceFuelSlotChangedEiRK9ItemStackS2_
    void _onFurnaceResultSlotChanged(int, ItemStack const&, ItemStack const&); // _ZN28FurnaceContainerManagerModel27_onFurnaceResultSlotChangedEiRK9ItemStackS2_
};
