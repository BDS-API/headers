#pragma once

#include "ContainerModel.h"


class PlayerUIContainerModelBase : ContainerModel {

public:
    virtual void _getContainerOffset()const;
    virtual void releaseResources();
    virtual void postInit();
    virtual bool isValid();
    virtual void _getContainer()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    ~PlayerUIContainerModelBase();
    virtual void containerContentChanged(int);
    void _refreshContainer();
    void _refreshSlot(int);
//  PlayerUIContainerModelBase(ContainerEnumName, Player &, int, ContainerCategory); //TODO: incomplete function definition
};
