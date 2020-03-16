#pragma once

#include "ContainerManagerModel.h"


class ElementConstructorContainerManagerModel : public ContainerManagerModel {

public:
    virtual ~ElementConstructorContainerManagerModel(); // _ZN39ElementConstructorContainerManagerModelD2Ev
    virtual void __fake_function0(); // fake
    virtual void getItems(); // _ZN39ElementConstructorContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN39ElementConstructorContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN39ElementConstructorContainerManagerModel7getSlotEi
    virtual void setData(int, int); // _ZN39ElementConstructorContainerManagerModel7setDataEii
    virtual void broadcastChanges(); // _ZN39ElementConstructorContainerManagerModel16broadcastChangesEv
    virtual void init(); // _ZN39ElementConstructorContainerManagerModel4initEv
    virtual bool isValid(float); // _ZN39ElementConstructorContainerManagerModel7isValidEf
//    ElementConstructorContainerManagerModel(long, Player &, BlockPos const&); //TODO: incomplete function definition // _ZN39ElementConstructorContainerManagerModelC2E11ContainerIDR6PlayerRK8BlockPos
};
