#pragma once

#include "IContainerManager.h"
#include "../../../unmapped/ContainerContentChangeListener.h"


class BaseContainerMenu : ContainerContentChangeListener, IContainerManager {

public:
//  virtual void setContainerId(ContainerID); //TODO: incomplete function definition
    virtual bool isSlotDirty(int);
    virtual bool isResultSlot(int);
    ~BaseContainerMenu();
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void getContainerId()const;
    virtual void getContainerType()const;
//  virtual void setContainerType(ContainerType); //TODO: incomplete function definition
    virtual void containerContentChanged(int);
//  BaseContainerMenu(Player &, ContainerType); //TODO: incomplete function definition
    void distanceCheck(BlockPos const&, float);
    void _saveLastSlots(Container *);
    void setLastSlot(int, ItemStack const&);
};
