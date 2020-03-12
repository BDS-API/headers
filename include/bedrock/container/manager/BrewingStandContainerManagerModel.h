#pragma once

#include "../../item/ItemStack.h"
#include "ContainerManagerModel.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../util/BlockPos.h"
#include "../../item/unmapped/ItemDescriptor.h"
#include "../../actor/Player.h"


class BrewingStandContainerManagerModel : ContainerManagerModel {

public:
    virtual void init();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getItems();
    virtual void setData(int, int);
    virtual void getSlot(int);
    virtual void broadcastChanges();
    ~BrewingStandContainerManagerModel();
    void getBrewProgress(int);
    void firePotionBrewedEvent(ItemDescriptor const&, int);
    void _onFuelSlotChanged(int, ItemStack const&, ItemStack const&);
    bool isFinished(int &, int &, int);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    bool isStandValid(float);
    void _onInputSlotChanged(int, ItemStack const&, ItemStack const&);
    void _getBrewingStandEntity();
    void getBlockPos()const;
//  BrewingStandContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void getFuelProgress(int);
    void _onOutputSlotChanged(int, ItemStack const&, ItemStack const&);
    void getBubbleProgress(int);
};
