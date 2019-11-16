#pragma once

class LevelContainerModel : ContainerModel {

    virtual void LevelcontainerContentChanged(int);
    virtual void Level~LevelContainerModel();
    virtual void Level~LevelContainerModel();
    virtual void LevelpostInit(void);
    virtual void LevelreleaseResources(void);
    virtual void getContainerSize(void)const;
    virtual void getFilteredContainerSize(void)const;
    virtual void tick(int);
    virtual void getItem(int)const;
    virtual void getItems(void)const;
    virtual void getItemInstances(void);
    virtual void setItem(int, ContainerItemStack const&);
    virtual void LevelisValid(void);
    virtual void isItemFiltered(ContainerItemStack const&)const;
    virtual void isExpanableItemFiltered(int)const;
    virtual void getItemExpandStatus(int)const;
    virtual void _ZNK14ContainerModel16getItemGroupNameB5cxx11Ei;
    virtual void switchItemExpando(int);
    virtual void Level_getContainerOffset(void)const;
    virtual void Level_onItemChanged(int, ItemStack const&, ItemStack const&);
}
