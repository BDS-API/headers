#pragma once

class DropperContainerManagerModel : LevelContainerManagerModel {

public:
    virtual ~DropperContainerManagerModel();
    virtual void init(void);

    void DropperContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
