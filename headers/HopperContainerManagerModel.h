#pragma once

class HopperContainerManagerModel : LevelContainerManagerModel {

public:
    virtual ~HopperContainerManagerModel();
    virtual void init(void);

    void HopperContainerManagerModel(ContainerID, Player &, BlockPos const&);
    void HopperContainerManagerModel(ContainerID, Player &, ActorUniqueID const&);
};
