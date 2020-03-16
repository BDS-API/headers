#pragma once

#include "StructureStart.h"


class StrongholdStart : public StructureStart {

public:
    virtual ~StrongholdStart(); // _ZN15StrongholdStartD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isValid()const; // _ZNK15StrongholdStart7isValidEv
    virtual void getType()const; // _ZNK15StrongholdStart7getTypeEv
    StrongholdStart(Dimension &, Random &, int, int); // _ZN15StrongholdStartC2ER9DimensionR6Randomii
};
