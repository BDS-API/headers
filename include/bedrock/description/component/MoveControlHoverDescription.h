#pragma once

#include "MoveControlDescription.h"


class MoveControlHoverDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    ~MoveControlHoverDescription();
    MoveControlHoverDescription();
};
