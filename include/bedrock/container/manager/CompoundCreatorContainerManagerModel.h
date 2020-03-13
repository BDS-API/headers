#pragma once

#include "ContainerManagerModel.h"


class CompoundCreatorContainerManagerModel : ContainerManagerModel {

public:
    ~CompoundCreatorContainerManagerModel(); // _ZN36CompoundCreatorContainerManagerModelD2Ev
    virtual void getItems(); // _ZN36CompoundCreatorContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN36CompoundCreatorContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN36CompoundCreatorContainerManagerModel7getSlotEi
    virtual void setData(int, int); // _ZN36CompoundCreatorContainerManagerModel7setDataEii
    virtual void broadcastChanges(); // _ZN36CompoundCreatorContainerManagerModel16broadcastChangesEv
    virtual void init(); // _ZN36CompoundCreatorContainerManagerModel4initEv
    virtual bool isValid(float); // _ZN36CompoundCreatorContainerManagerModel7isValidEf
//  CompoundCreatorContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition // _ZN36CompoundCreatorContainerManagerModelC2E11ContainerIDR6PlayerRK8BlockPos
    void getInputItems(); // _ZN36CompoundCreatorContainerManagerModel13getInputItemsEv
    void setOutput(ContainerItemStack const&); // _ZN36CompoundCreatorContainerManagerModel9setOutputERK18ContainerItemStack
    void getOutput(); // _ZN36CompoundCreatorContainerManagerModel9getOutputEv
};
