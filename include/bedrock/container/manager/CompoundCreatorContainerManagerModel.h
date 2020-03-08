#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../util/BlockPos"
#include "../../actor/Player"


class CompoundCreatorContainerManagerModel : ContainerManagerModel {

public:
    virtual CompoundCreatorContainerManagerModel::~CompoundCreatorContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();
    virtual bool isValid(float);

    CompoundCreatorContainerManagerModel(ContainerID, Player &, BlockPos const&);
    void getInputItems();
    void setOutput(ContainerItemStack const&);
    void getOutput();
};
