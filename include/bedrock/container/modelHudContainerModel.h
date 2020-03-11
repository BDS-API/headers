#pragma once

#include "./ContainerModel.h"
#include "../../actor/Player.h"


class HudContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual ~HudContainerModel();
    virtual bool isValid();

//  HudContainerModel(ContainerEnumName, Player &); //TODO: incomplete function definition
    void _init();
    void _refreshContainer();
    void _refreshSlot(int);
};
