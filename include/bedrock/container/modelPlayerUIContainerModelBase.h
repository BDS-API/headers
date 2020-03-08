#pragma once

#include "../../actor/Player"
#include "../../item/ItemStack"


class PlayerUIContainerModelBase : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual PlayerUIContainerModelBase::~PlayerUIContainerModelBase()
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
