#pragma once

#include "../../actor/Player"


class BlastFurnaceContainerManagerModel : FurnaceContainerManagerModel {

public:
    virtual BlastFurnaceContainerManagerModel::~BlastFurnaceContainerManagerModel();

    BlastFurnaceContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
