#pragma once

#include "../../util/BlockPos.h"
#include "LevelContainerManagerModel.h"
#include "../../actor/Player.h"


class DropperContainerManagerModel : LevelContainerManagerModel {

public:
    virtual void init();
    ~DropperContainerManagerModel();
//  DropperContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
};
