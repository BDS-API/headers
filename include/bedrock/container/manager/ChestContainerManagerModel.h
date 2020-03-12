#pragma once

#include "../../item/ItemInstance.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../util/BlockPos.h"
#include "LevelContainerManagerModel.h"
#include "../../actor/Player.h"


class ChestContainerManagerModel : LevelContainerManagerModel {

public:
    virtual bool isValid(float);
    virtual void init();
    ~ChestContainerManagerModel();
//  ChestContainerManagerModel(ContainerID, Player &, BlockPos const&, BlockActorType); //TODO: incomplete function definition
//  ChestContainerManagerModel(ContainerID, Player &, ActorUniqueID); //TODO: incomplete function definition
    void getBlockActorType()const;
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void closeContainer();
    void fireFullCobbleStoneEvent();
};
