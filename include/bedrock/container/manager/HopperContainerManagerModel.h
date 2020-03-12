#pragma once

#include "../../util/BlockPos.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "LevelContainerManagerModel.h"
#include "../../actor/Player.h"


class HopperContainerManagerModel : LevelContainerManagerModel {

public:
    virtual void init();
    ~HopperContainerManagerModel();
//  HopperContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
//  HopperContainerManagerModel(ContainerID, Player &, ActorUniqueID const&); //TODO: incomplete function definition
};
