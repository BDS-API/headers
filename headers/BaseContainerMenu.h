#pragma once

class BaseContainerMenu : ContainerContentChangeListener, IContainerManager {

    virtual void containerContentChanged(int);
    virtual void ~BaseContainerMenu();
    virtual void ~BaseContainerMenu();
    virtual void removeSlot(int, int);
    virtual void isSlotDirty(int);
    virtual void isResultSlot(int);
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void broadcastChanges(void);
    virtual void _getContainer(void)const;
    virtual void ;
    virtual void `non-virtual thunk to'~BaseContainerMenu();
    virtual void `non-virtual thunk to'~BaseContainerMenu();
    virtual void `non-virtual thunk to'getContainerId(void)const;
    virtual void `non-virtual thunk to'setContainerId(ContainerID);
    virtual void `non-virtual thunk to'getContainerType(void)const;
    virtual void `non-virtual thunk to'setContainerType(ContainerType);
    virtual void `non-virtual thunk to'getItems(void);
    virtual void `non-virtual thunk to'setSlot(int, ContainerItemStack const&, bool);
    virtual void `non-virtual thunk to'getSlot(int);
    virtual void `non-virtual thunk to'setData(int, int);
    virtual void `non-virtual thunk to'broadcastChanges(void);
}
