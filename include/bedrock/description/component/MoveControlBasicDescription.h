#pragma once

#include "MoveControlDescription.h"


class MoveControlBasicDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    ~MoveControlBasicDescription();
    MoveControlBasicDescription();
};
