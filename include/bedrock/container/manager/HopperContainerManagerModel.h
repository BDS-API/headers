#pragma once

#include "../../actor/unmapped/ActorUniqueID"
#include "../../util/BlockPos"
#include "../../actor/Player"


class HopperContainerManagerModel : LevelContainerManagerModel {

public:
    HopperContainerManagerModel::~HopperContainerManagerModel()
    virtual void init();

    HopperContainerManagerModel(ContainerID, Player &, BlockPos const&);
    HopperContainerManagerModel(ContainerID, Player &, ActorUniqueID const&);
};
