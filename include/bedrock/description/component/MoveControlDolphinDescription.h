#pragma once

#include "./MoveControlDescription.h"


class MoveControlDolphinDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    virtual ~MoveControlDolphinDescription();

    MoveControlDolphinDescription();
};
