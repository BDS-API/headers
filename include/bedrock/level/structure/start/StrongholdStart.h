#pragma once

#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "StructureStart.h"


class StrongholdStart : StructureStart {

public:
    virtual void getType()const;
    virtual bool isValid()const;
    ~StrongholdStart();
    StrongholdStart(Dimension &, Random &, int, int);
};
