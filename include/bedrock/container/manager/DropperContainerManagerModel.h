#pragma once

class DropperContainerManagerModel : LevelContainerManagerModel {

public:
    virtual DropperContainerManagerModel::~DropperContainerManagerModel();
    virtual void init(void);

    DropperContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
