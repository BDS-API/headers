#pragma once

#include "../../actor/Player"


class SmokerContainerManagerModel : FurnaceContainerManagerModel {

public:
    virtual SmokerContainerManagerModel::~SmokerContainerManagerModel();

    SmokerContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
