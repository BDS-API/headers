#pragma once

#include "../../item/ItemStack"
#include "../../actor/Player"


class InventoryContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    InventoryContainerModel::~InventoryContainerModel()
    virtual void postInit();
    virtual void releaseResources();
    virtual bool isValid();
    virtual void _getContainerOffset()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void _getContainer()const;

    InventoryContainerModel(ContainerEnumName, int, Player &);
    void _refreshSlot(int);
    void _refreshContainer();
};
