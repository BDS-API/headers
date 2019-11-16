#pragma once

class BrewingStandContainerManagerModel : ContainerManagerModel {

    virtual void BrewingStand~BrewingStandContainerManagerModel();
    virtual void BrewingStand~BrewingStandContainerManagerModel();
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void BrewingStandgetItems(void);
    virtual void BrewingStandsetSlot(int, ContainerItemStack const&, bool);
    virtual void BrewingStandgetSlot(int);
    virtual void BrewingStandsetData(int, int);
    virtual void BrewingStandbroadcastChanges(void);
    virtual void BrewingStandinit(void);
    virtual void isValid(float);
}
