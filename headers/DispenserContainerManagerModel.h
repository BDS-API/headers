#pragma once

class DispenserContainerManagerModel : LevelContainerManagerModel {

public:
    virtual ~DispenserContainerManagerModel();
    virtual void init(void);

    void DispenserContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
