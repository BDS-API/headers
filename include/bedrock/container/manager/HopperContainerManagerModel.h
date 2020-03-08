#pragma once

#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../actor/unmapped/ActorUniqueID"


class HopperContainerManagerModel : LevelContainerManagerModel {

public:
    virtual HopperContainerManagerModel::~HopperContainerManagerModel()
    virtual void init();

    HopperContainerManagerModel(ContainerID, Player &, BlockPos const&);
    HopperContainerManagerModel(ContainerID, Player &, ActorUniqueID const&);
};
