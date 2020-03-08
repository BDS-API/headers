#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/util/BlockPos"


class PortalRecord {

public:

    PortalRecord(PortalRecord&&);
    PortalRecord(BlockPos const&);
    PortalRecord(BlockPos const&, int, int, int);
    void closestBlockPosTo(Actor const&)const;
    void hashCode()const;
    PortalRecord(PortalRecord const&);
};
