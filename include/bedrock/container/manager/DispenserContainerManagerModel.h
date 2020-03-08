#pragma once

#include "../../util/BlockPos"
#include "../../actor/Player"


class DispenserContainerManagerModel : LevelContainerManagerModel {

public:
    virtual DispenserContainerManagerModel::~DispenserContainerManagerModel()
    virtual void init();

    DispenserContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
