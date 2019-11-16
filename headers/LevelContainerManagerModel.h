#pragma once

class LevelContainerManagerModel : ContainerManagerModel {

    virtual void Level~LevelContainerManagerModel();
    virtual void Level~LevelContainerManagerModel();
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void LevelgetItems(void);
    virtual void LevelsetSlot(int, ContainerItemStack const&, bool);
    virtual void LevelgetSlot(int);
    virtual void LevelsetData(int, int);
    virtual void LevelbroadcastChanges(void);
    virtual void Levelinit(void);
    virtual void LevelisValid(float);
}
