#pragma once

#include "./ContainerModel.h"
#include "../../item/ItemStack.h"
#include "../../actor/Player.h"


class PlayerUIContainerModelBase : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual ~PlayerUIContainerModelBase();
    virtual void postInit();
    virtual void releaseResources();
    virtual bool isValid();
    virtual void _getContainerOffset()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void _getContainer()const;

//  PlayerUIContainerModelBase(ContainerEnumName, Player &, int, ContainerCategory); //TODO: incomplete function definition
    void _refreshContainer();
    void _refreshSlot(int);
};
