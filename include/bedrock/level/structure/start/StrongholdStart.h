#pragma once

#include "StructureStart.h"


class StrongholdStart : StructureStart {

public:
    ~StrongholdStart(); // _ZN15StrongholdStartD2Ev
    virtual bool isValid()const; // _ZNK15StrongholdStart7isValidEv
    virtual void getType()const; // _ZNK15StrongholdStart7getTypeEv
    StrongholdStart(Dimension &, Random &, int, int); // _ZN15StrongholdStartC2ER9DimensionR6Randomii
};
