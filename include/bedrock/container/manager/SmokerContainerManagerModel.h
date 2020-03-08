#pragma once

#include "../../util/BlockPos"
#include "../../actor/Player"


class SmokerContainerManagerModel : FurnaceContainerManagerModel {

public:
    SmokerContainerManagerModel::~SmokerContainerManagerModel()

    SmokerContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
