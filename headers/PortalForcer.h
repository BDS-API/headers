#pragma once

class PortalForcer : SavedData {

public:
    virtual ~PortalForcer();
    virtual void deserialize(CompoundTag const&);
    virtual void serialize(CompoundTag &)const;

    void PortalForcer(Level &);
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
