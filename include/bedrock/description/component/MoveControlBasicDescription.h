#pragma once

#include "MoveControlDescription.h"


class MoveControlBasicDescription : MoveControlDescription {

public:
    ~MoveControlBasicDescription();
    virtual void getJsonName()const;
    MoveControlBasicDescription();
};
