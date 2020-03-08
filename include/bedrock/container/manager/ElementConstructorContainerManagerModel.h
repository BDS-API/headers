#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../util/BlockPos"
#include "../../actor/Player"


class ElementConstructorContainerManagerModel : ContainerManagerModel {

public:
    virtual ElementConstructorContainerManagerModel::~ElementConstructorContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();
    virtual bool isValid(float);

    ElementConstructorContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
