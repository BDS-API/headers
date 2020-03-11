#pragma once

#include "./ContainerModel.h"
#include "../../item/ItemStack.h"
#include "../../actor/Player.h"


class InventoryContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual ~InventoryContainerModel();
    virtual void postInit();
    virtual void releaseResources();
    virtual bool isValid();
    virtual void _getContainerOffset()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void _getContainer()const;

//  InventoryContainerModel(ContainerEnumName, int, Player &); //TODO: incomplete function definition
    void _refreshSlot(int);
    void _refreshContainer();
};
