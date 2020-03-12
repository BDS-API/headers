#pragma once

#include "SavedData.h"
#include "PortalRecord.h"


class PortalForcer : SavedData {

public:
    static std::string PORTAL_FILE_ID;

    virtual void serialize(CompoundTag &)const;
    ~PortalForcer();
    virtual void deserialize(CompoundTag const&);
    PortalForcer(Level &);
//  void printPortalRecords(AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    void removePortalRecord(BlockSource &, BlockPos const&);
//  void travelPortal(Actor &, BlockPos const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
//  void addPortalRecord(AutomaticID<Dimension, int>, PortalRecord); //TODO: incomplete function definition
//  void addPortalRecord(AutomaticID<Dimension, int>, PortalShape const&); //TODO: incomplete function definition
    void force(Actor &);
//  void findPortal(AutomaticID<Dimension, int>, BlockPos const&, int, BlockPos &)const; //TODO: incomplete function definition
    void createPortal(Actor const&, int);
//  void portalRecordExists(AutomaticID<Dimension, int>, PortalRecord const&)const; //TODO: incomplete function definition
};
