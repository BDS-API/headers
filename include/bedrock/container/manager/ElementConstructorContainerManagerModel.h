#pragma once

#include "../../util/BlockPos.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../actor/Player.h"
#include "ContainerManagerModel.h"


class ElementConstructorContainerManagerModel : ContainerManagerModel {

public:
    virtual void init();
    virtual void setData(int, int);
    virtual bool isValid(float);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void broadcastChanges();
    ~ElementConstructorContainerManagerModel();
    virtual void getItems();
    virtual void getSlot(int);
//  ElementConstructorContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
};
