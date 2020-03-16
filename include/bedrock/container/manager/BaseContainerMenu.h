#pragma once

#include "../../../unmapped/ContainerContentChangeListener.h"
#include "IContainerManager.h"


class BaseContainerMenu : public ContainerContentChangeListener, public IContainerManager {

public:
    virtual void containerContentChanged(int); // _ZN17BaseContainerMenu23containerContentChangedEi
    virtual ~BaseContainerMenu(); // _ZN17BaseContainerMenuD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isSlotDirty(int); // _ZN17BaseContainerMenu11isSlotDirtyEi
    virtual bool isResultSlot(int); // _ZN17BaseContainerMenu12isResultSlotEi
    virtual void setData(int, int); // _ZN17BaseContainerMenu7setDataEii
    virtual void getContainerId()const; // _ZNK17BaseContainerMenu14getContainerIdEv
    virtual void setContainerId__incomplete0(long); //TODO: incomplete function definition // _ZN17BaseContainerMenu14setContainerIdE11ContainerID
    virtual void getContainerType()const; // _ZNK17BaseContainerMenu16getContainerTypeEv
    virtual void setContainerType__incomplete0(long); //TODO: incomplete function definition // _ZN17BaseContainerMenu16setContainerTypeE13ContainerType
    virtual void broadcastChanges(); // _ZN17BaseContainerMenu16broadcastChangesEv
//    BaseContainerMenu(Player &, long); //TODO: incomplete function definition // _ZN17BaseContainerMenuC2ER6Player13ContainerType
    void _saveLastSlots(Container *); // _ZN17BaseContainerMenu14_saveLastSlotsEP9Container
    void distanceCheck(BlockPos const&, float); // _ZN17BaseContainerMenu13distanceCheckERK8BlockPosf
    void setLastSlot(int, ItemStack const&); // _ZN17BaseContainerMenu11setLastSlotEiRK9ItemStack
};
