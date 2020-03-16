#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "LevelContainerManagerModel.h"


class ChestContainerManagerModel : public LevelContainerManagerModel {

public:
    virtual ~ChestContainerManagerModel(); // _ZN26ChestContainerManagerModelD2Ev
    virtual void __fake_function0(); // fake
    virtual void init(); // _ZN26ChestContainerManagerModel4initEv
    virtual bool isValid(float); // _ZN26ChestContainerManagerModel7isValidEf
//    ChestContainerManagerModel(long, Player &, BlockPos const&, long); //TODO: incomplete function definition // _ZN26ChestContainerManagerModelC2E11ContainerIDR6PlayerRK8BlockPos14BlockActorType
//    ChestContainerManagerModel(long, Player &, ActorUniqueID); //TODO: incomplete function definition // _ZN26ChestContainerManagerModelC2E11ContainerIDR6Player13ActorUniqueID
    void closeContainer(); // _ZN26ChestContainerManagerModel14closeContainerEv
    void fireFullCobbleStoneEvent(); // _ZN26ChestContainerManagerModel24fireFullCobbleStoneEventEv
    void fireItemAcquiredEvent(ItemInstance const&, int); // _ZN26ChestContainerManagerModel21fireItemAcquiredEventERK12ItemInstancei
    void getBlockActorType()const; // _ZNK26ChestContainerManagerModel17getBlockActorTypeEv
};
