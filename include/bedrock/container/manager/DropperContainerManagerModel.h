#pragma once

#include "./LevelContainerManagerModel.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class DropperContainerManagerModel : LevelContainerManagerModel {

public:
    virtual ~DropperContainerManagerModel();
    virtual void init();

//  DropperContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
};
