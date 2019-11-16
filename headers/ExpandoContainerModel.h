#pragma once

class ExpandoContainerModel : ContainerModel {

    virtual void ExpandocontainerContentChanged(int);
    virtual void Expando~ExpandoContainerModel();
    virtual void Expando~ExpandoContainerModel();
    virtual void postInit(void);
    virtual void releaseResources(void);
    virtual void ExpandogetContainerSize(void)const;
    virtual void ExpandogetFilteredContainerSize(void)const;
    virtual void tick(int);
    virtual void ExpandogetItem(int)const;
    virtual void ExpandogetItems(void)const;
    virtual void getItemInstances(void);
    virtual void ExpandosetItem(int, ContainerItemStack const&);
    virtual void isValid(void);
    virtual void isItemFiltered(ContainerItemStack const&)const;
    virtual void isExpanableItemFiltered(int)const;
    virtual void ExpandogetItemExpandStatus(int)const;
    virtual void _ZNK21ExpandoContainerModel16getItemGroupNameB5cxx11Ei;
    virtual void ExpandoswitchItemExpando(int);
    virtual void _getContainerOffset(void)const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void ExpandorefreshContainer(bool);
}
