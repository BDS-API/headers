#pragma once

#include "StructureStart.h"


class StrongholdStart : StructureStart {

public:
    ~StrongholdStart();
    virtual bool isValid()const;
    virtual void getType()const;
    StrongholdStart(Dimension &, Random &, int, int);
};
