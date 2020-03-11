#pragma once

#include "../../item/unmapped/ItemDescriptor.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "./ContainerManagerModel.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemInstance.h"
#include "../../item/ItemStack.h"
#include "../../actor/Player.h"


class BrewingStandContainerManagerModel : ContainerManagerModel {

public:
    virtual ~BrewingStandContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();

//  BrewingStandContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void _getBrewingStandEntity();
    bool isStandValid(float);
    void getBrewProgress(int);
    void getBubbleProgress(int);
    void getFuelProgress(int);
    bool isFinished(int &, int &, int);
    void firePotionBrewedEvent(ItemDescriptor const&, int);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void getBlockPos()const;
    void _onInputSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onOutputSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onFuelSlotChanged(int, ItemStack const&, ItemStack const&);
};
