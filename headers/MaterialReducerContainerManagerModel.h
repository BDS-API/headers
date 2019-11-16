#pragma once

class MaterialReducerContainerManagerModel : ContainerManagerModel {

    virtual void MaterialReducer~MaterialReducerContainerManagerModel();
    virtual void MaterialReducer~MaterialReducerContainerManagerModel();
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void MaterialReducergetItems(void);
    virtual void MaterialReducersetSlot(int, ContainerItemStack const&, bool);
    virtual void MaterialReducergetSlot(int);
    virtual void MaterialReducersetData(int, int);
    virtual void MaterialReducerbroadcastChanges(void);
    virtual void MaterialReducerinit(void);
    virtual void MaterialReducerisValid(float);
}
