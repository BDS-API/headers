#pragma once

#include "../../../../unmapped/Dimension.h"
#include "./StructureStart.h"
#include "../../../util/Random.h"


class StrongholdStart : StructureStart {

public:
    virtual ~StrongholdStart();
    virtual bool isValid()const;
    virtual void getType()const;

    StrongholdStart(Dimension &, Random &, int, int);
};
