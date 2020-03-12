#pragma once

#include "../Container.h"
#include "../../item/ItemStack.h"
#include "../../../unmapped/ContainerContentChangeListener.h"
#include "../../actor/Player.h"
#include "../../util/BlockPos.h"
#include "IContainerManager.h"


class BaseContainerMenu : ContainerContentChangeListener, IContainerManager {

public:
//  virtual void setContainerId(ContainerID); //TODO: incomplete function definition
    ~BaseContainerMenu();
    virtual bool isResultSlot(int);
//  virtual void setContainerType(ContainerType); //TODO: incomplete function definition
    virtual void getContainerType()const;
    virtual void setData(int, int);
    virtual bool isSlotDirty(int);
    virtual void containerContentChanged(int);
    virtual void broadcastChanges();
    virtual void getContainerId()const;
    void _saveLastSlots(Container *);
    void distanceCheck(BlockPos const&, float);
    void setLastSlot(int, ItemStack const&);
//  BaseContainerMenu(Player &, ContainerType); //TODO: incomplete function definition
};
