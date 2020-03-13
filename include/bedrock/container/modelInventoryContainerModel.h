#pragma once

#include "ContainerModel.h"


class InventoryContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int); // _ZN23InventoryContainerModel23containerContentChangedEi
    ~InventoryContainerModel(); // _ZN23InventoryContainerModelD2Ev
    virtual void postInit(); // _ZN23InventoryContainerModel8postInitEv
    virtual void releaseResources(); // _ZN23InventoryContainerModel16releaseResourcesEv
    virtual bool isValid(); // _ZN23InventoryContainerModel7isValidEv
    virtual void _getContainerOffset()const; // _ZNK23InventoryContainerModel19_getContainerOffsetEv
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&); // _ZN23InventoryContainerModel14_onItemChangedEiRK9ItemStackS2_
    virtual void _getContainer()const; // _ZNK23InventoryContainerModel13_getContainerEv
//  InventoryContainerModel(ContainerEnumName, int, Player &); //TODO: incomplete function definition // _ZN23InventoryContainerModelC2E17ContainerEnumNameiR6Player
    void _refreshSlot(int); // _ZN23InventoryContainerModel12_refreshSlotEi
    void _refreshContainer(); // _ZN23InventoryContainerModel17_refreshContainerEv
};
