#pragma once

#include "ContainerModel.h"
#include "../../actor/Player.h"


class HudContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    ~HudContainerModel();
    virtual bool isValid();
    void _refreshContainer();
//  HudContainerModel(ContainerEnumName, Player &); //TODO: incomplete function definition
    void _refreshSlot(int);
    void _init();
};
