#pragma once

#include "ContainerManagerModel.h"


class MaterialReducerContainerManagerModel : ContainerManagerModel {

public:
    static long OUTPUT_SLOTS;

    ~MaterialReducerContainerManagerModel(); // _ZN36MaterialReducerContainerManagerModelD2Ev
    virtual void getItems(); // _ZN36MaterialReducerContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN36MaterialReducerContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN36MaterialReducerContainerManagerModel7getSlotEi
    virtual void setData(int, int); // _ZN36MaterialReducerContainerManagerModel7setDataEii
    virtual void broadcastChanges(); // _ZN36MaterialReducerContainerManagerModel16broadcastChangesEv
    virtual void init(); // _ZN36MaterialReducerContainerManagerModel4initEv
    virtual bool isValid(float); // _ZN36MaterialReducerContainerManagerModel7isValidEf
//  MaterialReducerContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition // _ZN36MaterialReducerContainerManagerModelC2E11ContainerIDR6PlayerRK8BlockPos
    void setInput(ItemStack const&); // _ZN36MaterialReducerContainerManagerModel8setInputERK9ItemStack
    void getInput(); // _ZN36MaterialReducerContainerManagerModel8getInputEv
    void setOutput(int, ContainerItemStack const&); // _ZN36MaterialReducerContainerManagerModel9setOutputEiRK18ContainerItemStack
    void getOutput(int); // _ZN36MaterialReducerContainerManagerModel9getOutputEi
};
