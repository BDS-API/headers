#pragma once

class ExpandoContainerModel : ContainerModel {

    virtual void containerContentChanged(int);
    virtual ~ExpandoContainerModel();
    virtual ~ExpandoContainerModel();
    virtual void postInit(void);
    virtual void releaseResources(void);
    virtual void getContainerSize(void)const;
    virtual void getFilteredContainerSize(void)const;
    virtual void tick(int);
    virtual void getItem(int)const;
    virtual void getItems(void)const;
    virtual void getItemInstances(void);
    virtual void setItem(int, ContainerItemStack const&);
    virtual void isValid(void);
    virtual void isItemFiltered(ContainerItemStack const&)const;
    virtual void isExpanableItemFiltered(int)const;
    virtual void getItemExpandStatus(int)const;
    virtual void _ZNK21ExpandoContainerModel16getItemGroupNameB5cxx11Ei;
    virtual void switchItemExpando(int);
    virtual void _getContainerOffset(void)const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void refreshContainer(bool);
}
