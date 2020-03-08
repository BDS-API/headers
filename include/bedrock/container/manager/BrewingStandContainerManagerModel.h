#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../actor/Player"
#include "../../item/ItemInstance"
#include "../../item/ItemStack"
#include "../../../unmapped/ItemDescriptor"


class BrewingStandContainerManagerModel : ContainerManagerModel {

public:
    virtual BrewingStandContainerManagerModel::~BrewingStandContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);

    BrewingStandContainerManagerModel(ContainerID, Player &, BlockPos const&);
    void _getBrewingStandEntity(void);
    bool isStandValid(float);
    void getBrewProgress(int);
    void getBubbleProgress(int);
    void getFuelProgress(int);
    bool isFinished(int &, int &, int);
    void firePotionBrewedEvent(ItemDescriptor const&, int);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void getBlockPos(void)const;
    void _onInputSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onOutputSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onFuelSlotChanged(int, ItemStack const&, ItemStack const&);
};
