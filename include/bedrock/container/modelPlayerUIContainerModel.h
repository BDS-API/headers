#pragma once

#include "../../actor/Player"


class PlayerUIContainerModel : PlayerUIContainerModelBase {

public:
    virtual PlayerUIContainerModel::~PlayerUIContainerModel();
    virtual void _getContainerOffset(void)const;

    PlayerUIContainerModel(ContainerEnumName, Player &);
    void _getContainerSize(ContainerEnumName);
    void _getContainerCategory(ContainerEnumName);
};
