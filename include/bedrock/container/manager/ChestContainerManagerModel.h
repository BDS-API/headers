#pragma once

#include "../../actor/unmapped/ActorUniqueID"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../item/ItemInstance"


class ChestContainerManagerModel : LevelContainerManagerModel {

public:
    ChestContainerManagerModel::~ChestContainerManagerModel()
    virtual void init();
    virtual bool isValid(float);

    ChestContainerManagerModel(ContainerID, Player &, BlockPos const&, BlockActorType);
    ChestContainerManagerModel(ContainerID, Player &, ActorUniqueID);
    void closeContainer();
    void fireFullCobbleStoneEvent();
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void getBlockActorType()const;
};
