#pragma once

class PortalRecord {

public:

    void PortalRecord(PortalRecord&&);
    void PortalRecord(BlockPos const&);
    void PortalRecord(BlockPos const&, int, int, int);
    void closestBlockPosTo(Actor const&)const;
    void hashCode(void)const;
    void PortalRecord(PortalRecord const&);
};
