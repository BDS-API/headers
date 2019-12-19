#pragma once

class InventoryContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual InventoryContainerModel::~InventoryContainerModel();
    virtual void postInit(void);
    virtual void releaseResources(void);
    virtual bool isValid(void);
    virtual void _getContainerOffset(void)const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void _getContainer(void)const;

    InventoryContainerModel(ContainerEnumName, int, Player &);
    void _refreshSlot(int);
    void _refreshContainer(void);
};
