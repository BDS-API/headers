#pragma once

#include "MoveControlDescription.h"


class MoveControlSkipDescription : MoveControlDescription {

public:
    ~MoveControlSkipDescription();
    virtual void getJsonName()const;
    MoveControlSkipDescription();
};
