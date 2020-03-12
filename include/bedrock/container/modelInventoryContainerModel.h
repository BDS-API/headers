#pragma once

#include "ContainerModel.h"
#include "../../item/ItemStack.h"
#include "../../actor/Player.h"


class InventoryContainerModel : ContainerModel {

public:
    virtual void releaseResources();
    virtual void containerContentChanged(int);
    ~InventoryContainerModel();
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void _getContainer()const;
    virtual void _getContainerOffset()const;
    virtual bool isValid();
    virtual void postInit();
    void _refreshContainer();
    void _refreshSlot(int);
//  InventoryContainerModel(ContainerEnumName, int, Player &); //TODO: incomplete function definition
};
