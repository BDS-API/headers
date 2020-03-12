#pragma once

#include "PlayerUIContainerModelBase.h"


class PlayerUIContainerModel : PlayerUIContainerModelBase {

public:
    virtual void _getContainerOffset()const;
    ~PlayerUIContainerModel();
//  void _getContainerCategory(ContainerEnumName); //TODO: incomplete function definition
//  PlayerUIContainerModel(ContainerEnumName, Player &); //TODO: incomplete function definition
//  void _getContainerSize(ContainerEnumName); //TODO: incomplete function definition
};
