#pragma once

#include "PlayerUIContainerModelBase.h"


class PlayerUIContainerModel : PlayerUIContainerModelBase {

public:
    ~PlayerUIContainerModel(); // _ZN22PlayerUIContainerModelD2Ev
    virtual void _getContainerOffset()const; // _ZNK22PlayerUIContainerModel19_getContainerOffsetEv
//  PlayerUIContainerModel(ContainerEnumName, Player &); //TODO: incomplete function definition // _ZN22PlayerUIContainerModelC2E17ContainerEnumNameR6Player
//  void _getContainerSize(ContainerEnumName); //TODO: incomplete function definition // _ZN22PlayerUIContainerModel17_getContainerSizeE17ContainerEnumName
//  void _getContainerCategory(ContainerEnumName); //TODO: incomplete function definition // _ZN22PlayerUIContainerModel21_getContainerCategoryE17ContainerEnumName
};
