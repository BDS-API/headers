#pragma once

#include "./PlayerUIContainerModelBase.h"
#include "../../actor/Player.h"


class PlayerUIContainerModel : PlayerUIContainerModelBase {

public:
    virtual ~PlayerUIContainerModel();
    virtual void _getContainerOffset()const;

//  PlayerUIContainerModel(ContainerEnumName, Player &); //TODO: incomplete function definition
//  void _getContainerSize(ContainerEnumName); //TODO: incomplete function definition
//  void _getContainerCategory(ContainerEnumName); //TODO: incomplete function definition
};
