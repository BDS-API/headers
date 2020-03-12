#pragma once

#include "MoveControlDescription.h"


class MoveControlFlyDescription : MoveControlDescription {

public:
    ~MoveControlFlyDescription();
    virtual void getJsonName()const;
    MoveControlFlyDescription();
};
