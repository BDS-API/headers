#pragma once

#include "LevelContainerManagerModel.h"


class LabTableContainerManagerModel : public LevelContainerManagerModel {

public:
    static long INPUT_SLOTS;

    virtual ~LabTableContainerManagerModel(); // _ZN29LabTableContainerManagerModelD2Ev
    virtual void __fake_function0(); // fake
    virtual void getItems(); // _ZN29LabTableContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN29LabTableContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN29LabTableContainerManagerModel7getSlotEi
    virtual void setData(int, int); // _ZN29LabTableContainerManagerModel7setDataEii
    virtual void broadcastChanges(); // _ZN29LabTableContainerManagerModel16broadcastChangesEv
    virtual void init(); // _ZN29LabTableContainerManagerModel4initEv
    virtual bool isValid(float); // _ZN29LabTableContainerManagerModel7isValidEf
//    LabTableContainerManagerModel(long, Player &, BlockPos const&); //TODO: incomplete function definition // _ZN29LabTableContainerManagerModelC2E11ContainerIDR6PlayerRK8BlockPos
};
