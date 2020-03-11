#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/BlockPos.h"
#include "./PortalRecord.h"


class PortalRecord {

public:

    PortalRecord(PortalRecord &&);
    PortalRecord(BlockPos const&);
    PortalRecord(BlockPos const&, int, int, int);
    void closestBlockPosTo(Actor const&)const;
    void operator==(PortalRecord const&)const;
    void hashCode()const;
    PortalRecord(PortalRecord const&);
};
