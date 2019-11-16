#pragma once

class ElementConstructorContainerManagerModel : ContainerManagerModel {

    virtual void ElementConstructor~ElementConstructorContainerManagerModel();
    virtual void ElementConstructor~ElementConstructorContainerManagerModel();
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void ElementConstructorgetItems(void);
    virtual void ElementConstructorsetSlot(int, ContainerItemStack const&, bool);
    virtual void ElementConstructorgetSlot(int);
    virtual void ElementConstructorsetData(int, int);
    virtual void ElementConstructorbroadcastChanges(void);
    virtual void ElementConstructorinit(void);
    virtual void ElementConstructorisValid(float);
}
