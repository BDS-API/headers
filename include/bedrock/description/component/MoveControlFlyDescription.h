#pragma once

#include "./MoveControlDescription.h"


class MoveControlFlyDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    virtual ~MoveControlFlyDescription();

    MoveControlFlyDescription();
};
