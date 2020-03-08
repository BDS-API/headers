#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/level/Level"
#include "../bedrock/util/BlockPos"


class PortalForcer : SavedData {

public:
    static long PORTAL_FILE_ID[abi:cxx11];

    virtual PortalForcer::~PortalForcer()
    virtual void deserialize(CompoundTag const&);
    virtual void serialize(CompoundTag &)const;

    PortalForcer(Level &);
    void force(Actor &);
    void findPortal(AutomaticID<Dimension, int>, BlockPos const&, int, BlockPos&)const;
    void travelPortal(Actor &, BlockPos const&, AutomaticID<Dimension, int>)const;
    void createPortal(Actor const&, int);
    void addPortalRecord(AutomaticID<Dimension, int>, PortalShape const&);
    void portalRecordExists(AutomaticID<Dimension, int>, PortalRecord const&)const;
    void addPortalRecord(AutomaticID<Dimension, int>, PortalRecord);
    void removePortalRecord(BlockSource &, BlockPos const&);
    void printPortalRecords(AutomaticID<Dimension, int>)const;
};
