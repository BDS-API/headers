#pragma once

#include "MoveControlDescription.h"


class MoveControlSkipDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    ~MoveControlSkipDescription();
    MoveControlSkipDescription();
};
