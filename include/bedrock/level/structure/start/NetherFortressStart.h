#pragma once

#include "./StructureStart.h"
#include "../../../util/Random.h"


class NetherFortressStart : StructureStart {

public:
    virtual ~NetherFortressStart();
    virtual void getType()const;

    NetherFortressStart();
    NetherFortressStart(Random &, int, int);
};
