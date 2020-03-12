#pragma once

#include "../bedrock/util/BlockPos.h"
#include "../bedrock/actor/Actor.h"


class PortalRecord {

public:
    PortalRecord(BlockPos const&, int, int, int);
    void operator==(PortalRecord const&)const;
    PortalRecord(PortalRecord const&);
    PortalRecord(BlockPos const&);
    void hashCode()const;
    PortalRecord(PortalRecord &&);
    void closestBlockPosTo(Actor const&)const;
};
