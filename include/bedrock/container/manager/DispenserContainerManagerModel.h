#pragma once

#include "../../util/BlockPos"
#include "../../actor/Player"


class DispenserContainerManagerModel : LevelContainerManagerModel {

public:
    DispenserContainerManagerModel::~DispenserContainerManagerModel()
    virtual void init();

    DispenserContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
