#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "./ContainerManagerModel.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class ElementConstructorContainerManagerModel : ContainerManagerModel {

public:
    virtual ~ElementConstructorContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();
    virtual bool isValid(float);

//  ElementConstructorContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
};
