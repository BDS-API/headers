#pragma once

#include "../../util/BlockPos.h"
#include "./LevelContainerManagerModel.h"
#include "../../item/ItemInstance.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../actor/Player.h"


class ChestContainerManagerModel : LevelContainerManagerModel {

public:
    virtual ~ChestContainerManagerModel();
    virtual void init();
    virtual bool isValid(float);

//  ChestContainerManagerModel(ContainerID, Player &, BlockPos const&, BlockActorType); //TODO: incomplete function definition
//  ChestContainerManagerModel(ContainerID, Player &, ActorUniqueID); //TODO: incomplete function definition
    void closeContainer();
    void fireFullCobbleStoneEvent();
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void getBlockActorType()const;
};
