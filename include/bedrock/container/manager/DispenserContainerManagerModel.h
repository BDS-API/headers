#pragma once

class DispenserContainerManagerModel : LevelContainerManagerModel {

public:
    virtual DispenserContainerManagerModel::~DispenserContainerManagerModel();
    virtual void init(void);

    DispenserContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
