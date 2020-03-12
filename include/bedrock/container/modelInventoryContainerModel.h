#pragma once

#include "ContainerModel.h"


class InventoryContainerModel : ContainerModel {

public:
    virtual void _getContainer()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void postInit();
    ~InventoryContainerModel();
    virtual bool isValid();
    virtual void containerContentChanged(int);
    virtual void releaseResources();
    virtual void _getContainerOffset()const;
//  InventoryContainerModel(ContainerEnumName, int, Player &); //TODO: incomplete function definition
    void _refreshContainer();
    void _refreshSlot(int);
};
