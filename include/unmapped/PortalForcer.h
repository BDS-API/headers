#pragma once

#include "PortalRecord.h"
#include "SavedData.h"


class PortalForcer : SavedData {

public:
    static std::string PORTAL_FILE_ID;

    ~PortalForcer(); // _ZN12PortalForcerD2Ev
    virtual void deserialize(CompoundTag const&); // _ZN12PortalForcer11deserializeERK11CompoundTag
    virtual void serialize(CompoundTag &)const; // _ZNK12PortalForcer9serializeER11CompoundTag
    PortalForcer(Level &); // _ZN12PortalForcerC2ER5Level
    void force(Actor &); // _ZN12PortalForcer5forceER5Actor
//  void findPortal(AutomaticID<Dimension, int>, BlockPos const&, int, BlockPos &)const; //TODO: incomplete function definition // _ZNK12PortalForcer10findPortalE11AutomaticIDI9DimensioniERK8BlockPosiRS3_
//  void travelPortal(Actor &, BlockPos const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition // _ZNK12PortalForcer12travelPortalER5ActorRK8BlockPos11AutomaticIDI9DimensioniE
    void createPortal(Actor const&, int); // _ZN12PortalForcer12createPortalERK5Actori
//  void addPortalRecord(AutomaticID<Dimension, int>, PortalShape const&); //TODO: incomplete function definition // _ZN12PortalForcer15addPortalRecordE11AutomaticIDI9DimensioniERK11PortalShape
//  void portalRecordExists(AutomaticID<Dimension, int>, PortalRecord const&)const; //TODO: incomplete function definition // _ZNK12PortalForcer18portalRecordExistsE11AutomaticIDI9DimensioniERK12PortalRecord
//  void addPortalRecord(AutomaticID<Dimension, int>, PortalRecord); //TODO: incomplete function definition // _ZN12PortalForcer15addPortalRecordE11AutomaticIDI9DimensioniE12PortalRecord
    void removePortalRecord(BlockSource &, BlockPos const&); // _ZN12PortalForcer18removePortalRecordER11BlockSourceRK8BlockPos
//  void printPortalRecords(AutomaticID<Dimension, int>)const; //TODO: incomplete function definition // _ZNK12PortalForcer18printPortalRecordsE11AutomaticIDI9DimensioniE
};
