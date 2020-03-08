#pragma once

#include "../../actor/Player"


class DropperContainerManagerModel : LevelContainerManagerModel {

public:
    virtual DropperContainerManagerModel::~DropperContainerManagerModel();
    virtual void init(void);

    DropperContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
