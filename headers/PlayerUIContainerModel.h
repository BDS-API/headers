#pragma once

class PlayerUIContainerModel : PlayerUIContainerModelBase {

    virtual void ContainerModel::containerContentChanged(int);
    virtual void ~PlayerUIContainerModel();
    virtual void ~PlayerUIContainerModel();
    virtual void postInit(void);
    virtual void releaseResources(void);
    virtual void ContainerModel::getContainerSize(void)const;
    virtual void ContainerModel::getFilteredContainerSize(void)const;
    virtual void ContainerModel::tick(int);
    virtual void ContainerModel::getItem(int)const;
    virtual void ContainerModel::getItems(void)const;
    virtual void ContainerModel::getItemInstances(void);
    virtual void ContainerModel::setItem(int, ContainerItemStack const&);
    virtual void isValid(void);
    virtual void ContainerModel::isItemFiltered(ContainerItemStack const&)const;
    virtual void ContainerModel::isExpanableItemFiltered(int)const;
    virtual void ContainerModel::getItemExpandStatus(int)const;
    virtual void _ZNK14ContainerModel16getItemGroupNameB5cxx11Ei;
    virtual void ContainerModel::switchItemExpando(int);
    virtual void _getContainerOffset(void)const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void _getContainer(void)const;
}
