#pragma once

#include "../../util/BlockPos"
#include "../../actor/Player"


class BlastFurnaceContainerManagerModel : FurnaceContainerManagerModel {

public:
    BlastFurnaceContainerManagerModel::~BlastFurnaceContainerManagerModel()

    BlastFurnaceContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
