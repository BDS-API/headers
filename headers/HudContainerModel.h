#pragma once

class HudContainerModel : ContainerModel {

    virtual void HudcontainerContentChanged(int);
    virtual void Hud~HudContainerModel();
    virtual void Hud~HudContainerModel();
    virtual void postInit(void);
    virtual void releaseResources(void);
    virtual void getContainerSize(void)const;
    virtual void getFilteredContainerSize(void)const;
    virtual void tick(int);
    virtual void getItem(int)const;
    virtual void getItems(void)const;
    virtual void getItemInstances(void);
    virtual void setItem(int, ContainerItemStack const&);
    virtual void HudisValid(void);
    virtual void isItemFiltered(ContainerItemStack const&)const;
    virtual void isExpanableItemFiltered(int)const;
    virtual void getItemExpandStatus(int)const;
    virtual void _ZNK14ContainerModel16getItemGroupNameB5cxx11Ei;
    virtual void switchItemExpando(int);
    virtual void _getContainerOffset(void)const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
}
