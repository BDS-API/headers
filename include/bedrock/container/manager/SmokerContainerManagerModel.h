#pragma once

#include "../../util/BlockPos"
#include "../../actor/Player"


class SmokerContainerManagerModel : FurnaceContainerManagerModel {

public:
    virtual SmokerContainerManagerModel::~SmokerContainerManagerModel()

    SmokerContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
