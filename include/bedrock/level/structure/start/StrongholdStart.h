#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"


class StrongholdStart : StructureStart {

public:
    virtual StrongholdStart::~StrongholdStart()
    virtual bool isValid()const;
    virtual void getType()const;

    StrongholdStart(Dimension &, Random &, int, int);
};
