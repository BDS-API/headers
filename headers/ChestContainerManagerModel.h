#pragma once

class ChestContainerManagerModel : LevelContainerManagerModel {

public:
    virtual ~ChestContainerManagerModel();
    virtual void init(void);
    virtual bool isValid(float);

    void ChestContainerManagerModel(ContainerID, Player &, BlockPos const&, BlockActorType);
    void ChestContainerManagerModel(ContainerID, Player &, ActorUniqueID);
    void closeContainer(void);
    void fireFullCobbleStoneEvent(void);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void getBlockActorType(void)const;
};
