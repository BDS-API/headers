#pragma once

class FilteredContainerModel : ExpandoContainerModel {

    virtual void containerContentChanged(int);
    virtual void ~FilteredContainerModel();
    virtual void ~FilteredContainerModel();
    virtual void ContainerModel::postInit(void);
    virtual void ContainerModel::releaseResources(void);
    virtual void getContainerSize(void)const;
    virtual void getFilteredContainerSize(void)const;
    virtual void ContainerModel::tick(int);
    virtual void getItem(int)const;
    virtual void getItems(void)const;
    virtual void ContainerModel::getItemInstances(void);
    virtual void setItem(int, ContainerItemStack const&);
    virtual void ContainerModel::isValid(void);
    virtual void ContainerModel::isItemFiltered(ContainerItemStack const&)const;
    virtual void isExpanableItemFiltered(int)const;
    virtual void getItemExpandStatus(int)const;
    virtual void _ZNK21ExpandoContainerModel16getItemGroupNameB5cxx11Ei;
    virtual void switchItemExpando(int);
    virtual void ContainerModel::_getContainerOffset(void)const;
    virtual void ContainerModel::_onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void refreshContainer(bool);
}
