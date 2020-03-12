#pragma once



class PortalRecord {

public:
    void closestBlockPosTo(Actor const&)const;
    PortalRecord(BlockPos const&, int, int, int);
    void operator==(PortalRecord const&)const;
    PortalRecord(PortalRecord &&);
    PortalRecord(BlockPos const&);
    PortalRecord(PortalRecord const&);
    void hashCode()const;
};
