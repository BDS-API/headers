#pragma once

#include "../../actor/Player"
#include "../../item/ItemStack"


class PlayerUIContainerModelBase : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual PlayerUIContainerModelBase::~PlayerUIContainerModelBase();
    virtual void postInit(void);
    virtual void releaseResources(void);
    virtual bool isValid(void);
    virtual void _getContainerOffset(void)const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void _getContainer(void)const;

    PlayerUIContainerModelBase(ContainerEnumName, Player &, int, ContainerCategory);
    void _refreshContainer(void);
    void _refreshSlot(int);
};
