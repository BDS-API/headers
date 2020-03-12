#pragma once

#include "ContainerManagerModel.h"


class BrewingStandContainerManagerModel : ContainerManagerModel {

public:
    virtual void getSlot(int);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void init();
    virtual void getItems();
    virtual void broadcastChanges();
    ~BrewingStandContainerManagerModel();
    virtual void setData(int, int);
    void _getBrewingStandEntity();
//  BrewingStandContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void _onOutputSlotChanged(int, ItemStack const&, ItemStack const&);
    void firePotionBrewedEvent(ItemDescriptor const&, int);
    void getFuelProgress(int);
    void _onInputSlotChanged(int, ItemStack const&, ItemStack const&);
    void getBubbleProgress(int);
    void getBrewProgress(int);
    bool isStandValid(float);
    bool isFinished(int &, int &, int);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void _onFuelSlotChanged(int, ItemStack const&, ItemStack const&);
    void getBlockPos()const;
};
