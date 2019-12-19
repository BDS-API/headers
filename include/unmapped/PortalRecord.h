#pragma once

class PortalRecord {

public:

    PortalRecord(PortalRecord&&);
    PortalRecord(BlockPos const&);
    PortalRecord(BlockPos const&, int, int, int);
    void closestBlockPosTo(Actor const&)const;
    void hashCode(void)const;
    PortalRecord(PortalRecord const&);
};
