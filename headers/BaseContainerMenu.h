#pragma once

class BaseContainerMenu : ContainerContentChangeListener, IContainerManager {

    virtual void containerContentChanged(int);
    virtual void BaseContainerMenu::~BaseContainerMenu();
    virtual void BaseContainerMenu::~BaseContainerMenu();
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
    virtual void `non-virtual thunk to'BaseContainerMenu::~BaseContainerMenu();
    virtual void `non-virtual thunk to'BaseContainerMenu::~BaseContainerMenu();
    virtual void `non-virtual thunk to'BaseContainerMenu::getContainerId(void)const;
    virtual void `non-virtual thunk to'BaseContainerMenu::setContainerId(ContainerID);
    virtual void `non-virtual thunk to'BaseContainerMenu::getContainerType(void)const;
    virtual void `non-virtual thunk to'BaseContainerMenu::setContainerType(ContainerType);
    virtual void `non-virtual thunk to'BaseContainerMenu::getItems(void);
    virtual void `non-virtual thunk to'BaseContainerMenu::setSlot(int, ContainerItemStack const&, bool);
    virtual void `non-virtual thunk to'BaseContainerMenu::getSlot(int);
    virtual void `non-virtual thunk to'BaseContainerMenu::setData(int, int);
    virtual void `non-virtual thunk to'BaseContainerMenu::broadcastChanges(void);
}
