#pragma once

#include "ContainerModel.h"


class HudContainerModel : public ContainerModel {

public:
    virtual void containerContentChanged(int); // _ZN17HudContainerModel23containerContentChangedEi
    virtual ~HudContainerModel(); // _ZN17HudContainerModelD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isValid(); // _ZN17HudContainerModel7isValidEv
//    HudContainerModel(long, Player &); //TODO: incomplete function definition // _ZN17HudContainerModelC2E17ContainerEnumNameR6Player
    void _init(); // _ZN17HudContainerModel5_initEv
    void _refreshContainer(); // _ZN17HudContainerModel17_refreshContainerEv
    void _refreshSlot(int); // _ZN17HudContainerModel12_refreshSlotEi
};
