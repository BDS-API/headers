#pragma once

#include "../../actor/Player"
#include "../../item/ItemStack"


class InventoryContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual InventoryContainerModel::~InventoryContainerModel()
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
