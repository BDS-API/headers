#pragma once

#include "StructureStart.h"


class NetherFortressStart : StructureStart {

public:
    ~NetherFortressStart(); // _ZN19NetherFortressStartD2Ev
    virtual void getType()const; // _ZNK19NetherFortressStart7getTypeEv
    NetherFortressStart(); // _ZN19NetherFortressStartC2Ev
    NetherFortressStart(Random &, int, int); // _ZN19NetherFortressStartC2ER6Randomii
};
