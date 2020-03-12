#pragma once

#include "MoveControlDescription.h"


class AmphibiousMoveControlDescription : MoveControlDescription {

public:
    ~AmphibiousMoveControlDescription();
    virtual void getJsonName()const;
    AmphibiousMoveControlDescription();
};
