#pragma once

#include "../../actor/Player"


class PlayerUIContainerModel : PlayerUIContainerModelBase {

public:
    PlayerUIContainerModel::~PlayerUIContainerModel()
    virtual void _getContainerOffset()const;

    PlayerUIContainerModel(ContainerEnumName, Player &);
    void _getContainerSize(ContainerEnumName);
    void _getContainerCategory(ContainerEnumName);
};
