#pragma once

class BaseContainerMenu : ContainerContentChangeListener, IContainerManager {

public:
    virtual void containerContentChanged(int);
    virtual ~BaseContainerMenu();
    virtual bool isSlotDirty(int);
    virtual bool isResultSlot(int);
    virtual void setData(int, int);
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void broadcastChanges(void);

    void BaseContainerMenu(Player &, ContainerType);
    void _saveLastSlots(Container *);
    void distanceCheck(BlockPos const&, float);
    void setLastSlot(int, ItemStack const&);
};
