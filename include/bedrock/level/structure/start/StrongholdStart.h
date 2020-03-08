#pragma once

#include "../../../../unmapped/Dimension"
#include "../../../util/Random"


class StrongholdStart : StructureStart {

public:
    StrongholdStart::~StrongholdStart()
    virtual bool isValid()const;
    virtual void getType()const;

    StrongholdStart(Dimension &, Random &, int, int);
};
