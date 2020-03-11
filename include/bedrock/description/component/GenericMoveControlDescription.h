#pragma once

#include "./MoveControlDescription.h"


class GenericMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    virtual ~GenericMoveControlDescription();

    GenericMoveControlDescription();
};
