#pragma once

class SmokerContainerManagerModel : FurnaceContainerManagerModel {

public:
    virtual SmokerContainerManagerModel::~SmokerContainerManagerModel();

    SmokerContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
