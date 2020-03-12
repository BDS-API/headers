#pragma once

#include "ContainerModel.h"
#include "../../item/ItemStack.h"
#include "../../actor/Player.h"


class PlayerUIContainerModelBase : ContainerModel {

public:
    virtual void postInit();
    ~PlayerUIContainerModelBase();
    virtual void _getContainerOffset()const;
    virtual void containerContentChanged(int);
    virtual void releaseResources();
    virtual void _getContainer()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual bool isValid();
    void _refreshSlot(int);
    void _refreshContainer();
//  PlayerUIContainerModelBase(ContainerEnumName, Player &, int, ContainerCategory); //TODO: incomplete function definition
};
