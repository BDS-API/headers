#pragma once

#include "./LevelContainerManagerModel.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class DispenserContainerManagerModel : LevelContainerManagerModel {

public:
    virtual ~DispenserContainerManagerModel();
    virtual void init();

//  DispenserContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
};
