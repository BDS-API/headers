#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "LevelContainerManagerModel.h"


class ChestContainerManagerModel : LevelContainerManagerModel {

public:
    ~ChestContainerManagerModel();
    virtual void init();
    virtual bool isValid(float);
    void fireItemAcquiredEvent(ItemInstance const&, int);
//  ChestContainerManagerModel(ContainerID, Player &, ActorUniqueID); //TODO: incomplete function definition
    void fireFullCobbleStoneEvent();
    void getBlockActorType()const;
//  ChestContainerManagerModel(ContainerID, Player &, BlockPos const&, BlockActorType); //TODO: incomplete function definition
    void closeContainer();
};
