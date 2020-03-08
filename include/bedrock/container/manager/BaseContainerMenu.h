#pragma once

#include "../../../unmapped/BlockPos"
#include "../Container"
#include "../../actor/Player"
#include "../../../unmapped/ContainerContentChangeListener"
#include "../../item/ItemStack"


class BaseContainerMenu : ContainerContentChangeListener, IContainerManager {

public:
    virtual void containerContentChanged(int);
    virtual BaseContainerMenu::~BaseContainerMenu();
    virtual bool isSlotDirty(int);
    virtual bool isResultSlot(int);
    virtual void setData(int, int);
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void broadcastChanges(void);

    BaseContainerMenu(Player &, ContainerType);
    void _saveLastSlots(Container *);
    void distanceCheck(BlockPos const&, float);
    void setLastSlot(int, ItemStack const&);
};
