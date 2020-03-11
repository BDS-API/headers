#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "./ContainerManagerModel.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class CompoundCreatorContainerManagerModel : ContainerManagerModel {

public:
    virtual ~CompoundCreatorContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();
    virtual bool isValid(float);

//  CompoundCreatorContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void getInputItems();
    void setOutput(ContainerItemStack const&);
    void getOutput();
};
