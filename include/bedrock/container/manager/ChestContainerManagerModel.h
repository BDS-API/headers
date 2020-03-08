#pragma once

#include "../../item/ItemInstance"
#include "../../actor/Player"


class ChestContainerManagerModel : LevelContainerManagerModel {

public:
    virtual ChestContainerManagerModel::~ChestContainerManagerModel();
    virtual void init(void);
    virtual bool isValid(float);

    ChestContainerManagerModel(ContainerID, Player &, BlockPos const&, BlockActorType);
    ChestContainerManagerModel(ContainerID, Player &, ActorUniqueID);
    void closeContainer(void);
    void fireFullCobbleStoneEvent(void);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void getBlockActorType(void)const;
};
