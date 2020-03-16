#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "ContainerModel.h"


class LevelContainerModel : public ContainerModel {

public:
    virtual void containerContentChanged(int); // _ZN19LevelContainerModel23containerContentChangedEi
    virtual ~LevelContainerModel(); // _ZN19LevelContainerModelD2Ev
    virtual void __fake_function0(); // fake
    virtual void postInit(); // _ZN19LevelContainerModel8postInitEv
    virtual void releaseResources(); // _ZN19LevelContainerModel16releaseResourcesEv
    virtual bool isValid(); // _ZN19LevelContainerModel7isValidEv
    virtual void _getContainerOffset()const; // _ZNK19LevelContainerModel19_getContainerOffsetEv
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&); // _ZN19LevelContainerModel14_onItemChangedEiRK9ItemStackS2_
//    LevelContainerModel(long, int, Player &, long, BlockPos const&, long); //TODO: incomplete function definition // _ZN19LevelContainerModelC2E17ContainerEnumNameiR6Player14BlockActorTypeRK8BlockPos17ContainerCategory
//    LevelContainerModel(long, int, Player &, ActorUniqueID, long); //TODO: incomplete function definition // _ZN19LevelContainerModelC2E17ContainerEnumNameiR6Player13ActorUniqueID17ContainerCategory
    void getContainer(); // _ZN19LevelContainerModel12getContainerEv
    void _refreshSlot(int); // _ZN19LevelContainerModel12_refreshSlotEi
    void _getEntity()const; // _ZNK19LevelContainerModel10_getEntityEv
    void _getBlockEntity()const; // _ZNK19LevelContainerModel15_getBlockEntityEv
    void _refreshContainer(); // _ZN19LevelContainerModel17_refreshContainerEv
};
