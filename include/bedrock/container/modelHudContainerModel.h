#pragma once

#include "../../actor/Player"


class HudContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual HudContainerModel::~HudContainerModel()
    virtual bool isValid();

    HudContainerModel(ContainerEnumName, Player &);
    void _init();
    void _refreshContainer();
    void _refreshSlot(int);
};
