#pragma once

#include "ContainerModel.h"


class HudContainerModel : ContainerModel {

public:
    virtual bool isValid();
    virtual void containerContentChanged(int);
    ~HudContainerModel();
    void _init();
    void _refreshContainer();
//  HudContainerModel(ContainerEnumName, Player &); //TODO: incomplete function definition
    void _refreshSlot(int);
};
