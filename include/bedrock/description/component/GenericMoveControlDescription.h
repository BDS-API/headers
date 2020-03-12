#pragma once

#include "MoveControlDescription.h"


class GenericMoveControlDescription : MoveControlDescription {

public:
    ~GenericMoveControlDescription();
    virtual void getJsonName()const;
    GenericMoveControlDescription();
};
