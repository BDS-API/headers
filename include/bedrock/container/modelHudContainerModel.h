#pragma once

#include "../../actor/Player"


class HudContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual HudContainerModel::~HudContainerModel();
    virtual bool isValid(void);

    HudContainerModel(ContainerEnumName, Player &);
    void _init(void);
    void _refreshContainer(void);
    void _refreshSlot(int);
};
