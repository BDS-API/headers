#pragma once

#include "../bedrock/actor/Actor.h"
#include "PortalShape.h"
#include "../bedrock/level/Level.h"
#include <string>
#include "../bedrock/util/BlockPos.h"
#include "Dimension.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "PortalRecord.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "SavedData.h"


class PortalForcer : SavedData {

public:
    static std::string PORTAL_FILE_ID;

    ~PortalForcer();
    virtual void deserialize(CompoundTag const&);
    virtual void serialize(CompoundTag &)const;
    void removePortalRecord(BlockSource &, BlockPos const&);
//  void portalRecordExists(AutomaticID<Dimension, int>, PortalRecord const&)const; //TODO: incomplete function definition
//  void travelPortal(Actor &, BlockPos const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
//  void addPortalRecord(AutomaticID<Dimension, int>, PortalRecord); //TODO: incomplete function definition
    PortalForcer(Level &);
//  void addPortalRecord(AutomaticID<Dimension, int>, PortalShape const&); //TODO: incomplete function definition
    void createPortal(Actor const&, int);
//  void printPortalRecords(AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
//  void findPortal(AutomaticID<Dimension, int>, BlockPos const&, int, BlockPos &)const; //TODO: incomplete function definition
    void force(Actor &);
};
