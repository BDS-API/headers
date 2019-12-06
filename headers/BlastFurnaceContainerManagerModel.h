#pragma once

class BlastFurnaceContainerManagerModel : FurnaceContainerManagerModel {

public:
    virtual ~BlastFurnaceContainerManagerModel();

    void BlastFurnaceContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
