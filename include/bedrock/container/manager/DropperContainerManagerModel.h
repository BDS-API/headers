#pragma once

#include "../../util/BlockPos"
#include "../../actor/Player"


class DropperContainerManagerModel : LevelContainerManagerModel {

public:
    DropperContainerManagerModel::~DropperContainerManagerModel()
    virtual void init();

    DropperContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
