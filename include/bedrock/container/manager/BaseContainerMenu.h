#pragma once

#include "../Container.h"
#include "./IContainerManager.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/ContainerContentChangeListener.h"
#include "../../item/ItemStack.h"
#include "../../actor/Player.h"


class BaseContainerMenu : ContainerContentChangeListener, IContainerManager {

public:
    virtual void containerContentChanged(int);
    virtual ~BaseContainerMenu();
    virtual bool isSlotDirty(int);
    virtual bool isResultSlot(int);
    virtual void setData(int, int);
    virtual void getContainerId()const;
//  virtual void setContainerId(ContainerID); //TODO: incomplete function definition
    virtual void getContainerType()const;
//  virtual void setContainerType(ContainerType); //TODO: incomplete function definition
    virtual void broadcastChanges();

//  BaseContainerMenu(Player &, ContainerType); //TODO: incomplete function definition
    void _saveLastSlots(Container *);
    void distanceCheck(BlockPos const&, float);
    void setLastSlot(int, ItemStack const&);
};
