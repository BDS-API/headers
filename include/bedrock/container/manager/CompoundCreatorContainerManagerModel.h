#pragma once

#include "ContainerManagerModel.h"


class CompoundCreatorContainerManagerModel : ContainerManagerModel {

public:
    virtual void init();
    virtual bool isValid(float);
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    ~CompoundCreatorContainerManagerModel();
    virtual void broadcastChanges();
    virtual void setData(int, int);
    virtual void getSlot(int);
//  CompoundCreatorContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void setOutput(ContainerItemStack const&);
    void getInputItems();
    void getOutput();
};
