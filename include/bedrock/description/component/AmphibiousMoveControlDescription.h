#pragma once

#include "./MoveControlDescription.h"


class AmphibiousMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    virtual ~AmphibiousMoveControlDescription();

    AmphibiousMoveControlDescription();
};
