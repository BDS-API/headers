#pragma once

#include "../../../unmapped/ContainerContentChangeListener"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../item/ItemStack"
#include "../Container"


class BaseContainerMenu : ContainerContentChangeListener, IContainerManager {

public:
    virtual void containerContentChanged(int);
    virtual BaseContainerMenu::~BaseContainerMenu()
    virtual bool isSlotDirty(int);
    virtual bool isResultSlot(int);
    virtual void setData(int, int);
    virtual void getContainerId()const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType()const;
    virtual void setContainerType(ContainerType);
    virtual void broadcastChanges();

    BaseContainerMenu(Player &, ContainerType);
    void _saveLastSlots(Container *);
    void distanceCheck(BlockPos const&, float);
    void setLastSlot(int, ItemStack const&);
};
