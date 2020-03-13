#pragma once

#include "ContainerManagerModel.h"


class BrewingStandContainerManagerModel : ContainerManagerModel {

public:
    ~BrewingStandContainerManagerModel(); // _ZN33BrewingStandContainerManagerModelD2Ev
    virtual void getItems(); // _ZN33BrewingStandContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN33BrewingStandContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN33BrewingStandContainerManagerModel7getSlotEi
    virtual void setData(int, int); // _ZN33BrewingStandContainerManagerModel7setDataEii
    virtual void broadcastChanges(); // _ZN33BrewingStandContainerManagerModel16broadcastChangesEv
    virtual void init(); // _ZN33BrewingStandContainerManagerModel4initEv
//  BrewingStandContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition // _ZN33BrewingStandContainerManagerModelC2E11ContainerIDR6PlayerRK8BlockPos
    void _getBrewingStandEntity(); // _ZN33BrewingStandContainerManagerModel22_getBrewingStandEntityEv
    bool isStandValid(float); // _ZN33BrewingStandContainerManagerModel12isStandValidEf
    void getBrewProgress(int); // _ZN33BrewingStandContainerManagerModel15getBrewProgressEi
    void getBubbleProgress(int); // _ZN33BrewingStandContainerManagerModel17getBubbleProgressEi
    void getFuelProgress(int); // _ZN33BrewingStandContainerManagerModel15getFuelProgressEi
    bool isFinished(int &, int &, int); // _ZN33BrewingStandContainerManagerModel10isFinishedERiS0_i
    void firePotionBrewedEvent(ItemDescriptor const&, int); // _ZN33BrewingStandContainerManagerModel21firePotionBrewedEventERK14ItemDescriptori
    void fireItemAcquiredEvent(ItemInstance const&, int); // _ZN33BrewingStandContainerManagerModel21fireItemAcquiredEventERK12ItemInstancei
    void getBlockPos()const; // _ZNK33BrewingStandContainerManagerModel11getBlockPosEv
    void _onInputSlotChanged(int, ItemStack const&, ItemStack const&); // _ZN33BrewingStandContainerManagerModel19_onInputSlotChangedEiRK9ItemStackS2_
    void _onOutputSlotChanged(int, ItemStack const&, ItemStack const&); // _ZN33BrewingStandContainerManagerModel20_onOutputSlotChangedEiRK9ItemStackS2_
    void _onFuelSlotChanged(int, ItemStack const&, ItemStack const&); // _ZN33BrewingStandContainerManagerModel18_onFuelSlotChangedEiRK9ItemStackS2_
};
