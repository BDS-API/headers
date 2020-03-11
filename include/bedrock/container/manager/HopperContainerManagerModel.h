#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "./LevelContainerManagerModel.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class HopperContainerManagerModel : LevelContainerManagerModel {

public:
    virtual ~HopperContainerManagerModel();
    virtual void init();

//  HopperContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
//  HopperContainerManagerModel(ContainerID, Player &, ActorUniqueID const&); //TODO: incomplete function definition
};
