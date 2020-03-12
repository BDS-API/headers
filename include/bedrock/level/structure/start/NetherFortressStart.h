#pragma once

#include "../../../util/Random.h"
#include "StructureStart.h"


class NetherFortressStart : StructureStart {

public:
    ~NetherFortressStart();
    virtual void getType()const;
    NetherFortressStart();
    NetherFortressStart(Random &, int, int);
};
