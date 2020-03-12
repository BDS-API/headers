#pragma once

#include "MoveControlDescription.h"


class MoveControlHoverDescription : MoveControlDescription {

public:
    ~MoveControlHoverDescription();
    virtual void getJsonName()const;
    MoveControlHoverDescription();
};
