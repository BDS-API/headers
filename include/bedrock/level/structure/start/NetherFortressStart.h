#pragma once

#include "StructureStart.h"


class NetherFortressStart : StructureStart {

public:
    ~NetherFortressStart();
    virtual void getType()const;
    NetherFortressStart(Random &, int, int);
    NetherFortressStart();
};
