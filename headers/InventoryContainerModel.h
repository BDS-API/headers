#pragma once

class InventoryContainerModel : ContainerModel {

    virtual void InventorycontainerContentChanged(int);
    virtual void Inventory~InventoryContainerModel();
    virtual void Inventory~InventoryContainerModel();
    virtual void InventorypostInit(void);
    virtual void InventoryreleaseResources(void);
    virtual void getContainerSize(void)const;
    virtual void getFilteredContainerSize(void)const;
    virtual void tick(int);
    virtual void getItem(int)const;
    virtual void getItems(void)const;
    virtual void getItemInstances(void);
    virtual void setItem(int, ContainerItemStack const&);
    virtual void InventoryisValid(void);
    virtual void isItemFiltered(ContainerItemStack const&)const;
    virtual void isExpanableItemFiltered(int)const;
    virtual void getItemExpandStatus(int)const;
    virtual void _ZNK14ContainerModel16getItemGroupNameB5cxx11Ei;
    virtual void switchItemExpando(int);
    virtual void Inventory_getContainerOffset(void)const;
    virtual void Inventory_onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void Inventory_getContainer(void)const;
}
