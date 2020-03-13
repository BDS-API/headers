#pragma once

#include "ContainerModel.h"


class PlayerUIContainerModelBase : ContainerModel {

public:
    virtual void containerContentChanged(int); // _ZN26PlayerUIContainerModelBase23containerContentChangedEi
    ~PlayerUIContainerModelBase(); // _ZN26PlayerUIContainerModelBaseD2Ev
    virtual void postInit(); // _ZN26PlayerUIContainerModelBase8postInitEv
    virtual void releaseResources(); // _ZN26PlayerUIContainerModelBase16releaseResourcesEv
    virtual bool isValid(); // _ZN26PlayerUIContainerModelBase7isValidEv
    virtual void _getContainerOffset()const; // _ZNK26PlayerUIContainerModelBase19_getContainerOffsetEv
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&); // _ZN26PlayerUIContainerModelBase14_onItemChangedEiRK9ItemStackS2_
    virtual void _getContainer()const; // _ZNK26PlayerUIContainerModelBase13_getContainerEv
//  PlayerUIContainerModelBase(ContainerEnumName, Player &, int, ContainerCategory); //TODO: incomplete function definition // _ZN26PlayerUIContainerModelBaseC2E17ContainerEnumNameR6Playeri17ContainerCategory
    void _refreshContainer(); // _ZN26PlayerUIContainerModelBase17_refreshContainerEv
    void _refreshSlot(int); // _ZN26PlayerUIContainerModelBase12_refreshSlotEi
};
