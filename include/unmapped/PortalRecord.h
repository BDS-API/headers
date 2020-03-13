#pragma once



class PortalRecord {

public:
    PortalRecord(PortalRecord &&); // _ZN12PortalRecordC2EOS_
    PortalRecord(BlockPos const&); // _ZN12PortalRecordC2ERK8BlockPos
    PortalRecord(BlockPos const&, int, int, int); // _ZN12PortalRecordC2ERK8BlockPosiii
    void closestBlockPosTo(Actor const&)const; // _ZNK12PortalRecord17closestBlockPosToERK5Actor
    void operator==(PortalRecord const&)const; // _ZNK12PortalRecordeqERKS_
    void hashCode()const; // _ZNK12PortalRecord8hashCodeEv
    PortalRecord(PortalRecord const&); // _ZN12PortalRecordC2ERKS_
};
