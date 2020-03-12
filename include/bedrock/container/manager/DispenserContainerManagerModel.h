#pragma once

#include "../../util/BlockPos.h"
#include "LevelContainerManagerModel.h"
#include "../../actor/Player.h"


class DispenserContainerManagerModel : LevelContainerManagerModel {

public:
    ~DispenserContainerManagerModel();
    virtual void init();
//  DispenserContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
};
