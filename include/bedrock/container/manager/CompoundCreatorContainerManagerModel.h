#pragma once

#include "../../util/BlockPos.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../actor/Player.h"
#include "ContainerManagerModel.h"


class CompoundCreatorContainerManagerModel : ContainerManagerModel {

public:
    virtual bool isValid(float);
    virtual void init();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void broadcastChanges();
    ~CompoundCreatorContainerManagerModel();
    virtual void setData(int, int);
    void setOutput(ContainerItemStack const&);
    void getOutput();
    void getInputItems();
//  CompoundCreatorContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
};
