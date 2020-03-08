#pragma once

#include "../../item/ItemStack"
#include "../../actor/Player"


class PlayerUIContainerModelBase : ContainerModel {

public:
    virtual void containerContentChanged(int);
    PlayerUIContainerModelBase::~PlayerUIContainerModelBase()
    virtual void postInit();
    virtual void releaseResources();
    virtual bool isValid();
    virtual void _getContainerOffset()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void _getContainer()const;

    PlayerUIContainerModelBase(ContainerEnumName, Player &, int, ContainerCategory);
    void _refreshContainer();
    void _refreshSlot(int);
};
