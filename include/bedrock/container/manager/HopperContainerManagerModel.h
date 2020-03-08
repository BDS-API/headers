#pragma once

#include "../../actor/Player"


class HopperContainerManagerModel : LevelContainerManagerModel {

public:
    virtual HopperContainerManagerModel::~HopperContainerManagerModel();
    virtual void init(void);

    HopperContainerManagerModel(ContainerID, Player &, BlockPos const&);
    HopperContainerManagerModel(ContainerID, Player &, ActorUniqueID const&);
};
