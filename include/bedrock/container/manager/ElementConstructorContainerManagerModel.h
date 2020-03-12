#pragma once

#include "ContainerManagerModel.h"


class ElementConstructorContainerManagerModel : ContainerManagerModel {

public:
    virtual bool isValid(float);
    ~ElementConstructorContainerManagerModel();
    virtual void broadcastChanges();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getItems();
    virtual void init();
    virtual void getSlot(int);
    virtual void setData(int, int);
//  ElementConstructorContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
};
