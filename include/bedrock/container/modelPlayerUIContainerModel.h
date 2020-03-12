#pragma once

#include "../../actor/Player.h"
#include "PlayerUIContainerModelBase.h"


class PlayerUIContainerModel : PlayerUIContainerModelBase {

public:
    ~PlayerUIContainerModel();
    virtual void _getContainerOffset()const;
//  void _getContainerSize(ContainerEnumName); //TODO: incomplete function definition
//  PlayerUIContainerModel(ContainerEnumName, Player &); //TODO: incomplete function definition
//  void _getContainerCategory(ContainerEnumName); //TODO: incomplete function definition
};
