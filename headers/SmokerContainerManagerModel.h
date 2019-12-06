#pragma once

class SmokerContainerManagerModel : FurnaceContainerManagerModel {

public:
    virtual ~SmokerContainerManagerModel();

    void SmokerContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
