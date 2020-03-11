#pragma once

#include "./MoveControlDescription.h"


class MoveControlSkipDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    virtual ~MoveControlSkipDescription();

    MoveControlSkipDescription();
};
