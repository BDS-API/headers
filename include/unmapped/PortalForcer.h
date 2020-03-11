#pragma once

#include "./SavedData.h"
#include "./PortalShape.h"
#include "./Dimension.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/util/BlockPos.h"
#include "./PortalRecord.h"


class PortalForcer : SavedData {

public:
    static std::string PORTAL_FILE_ID;

    virtual ~PortalForcer();
    virtual void deserialize(CompoundTag const&);
    virtual void serialize(CompoundTag &)const;

    PortalForcer(Level &);
    void force(Actor &);
//  void findPortal(AutomaticID<Dimension, int>, BlockPos const&, int, BlockPos &)const; //TODO: incomplete function definition
//  void travelPortal(Actor &, BlockPos const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    void createPortal(Actor const&, int);
//  void addPortalRecord(AutomaticID<Dimension, int>, PortalShape const&); //TODO: incomplete function definition
//  void portalRecordExists(AutomaticID<Dimension, int>, PortalRecord const&)const; //TODO: incomplete function definition
//  void addPortalRecord(AutomaticID<Dimension, int>, PortalRecord); //TODO: incomplete function definition
    void removePortalRecord(BlockSource &, BlockPos const&);
//  void printPortalRecords(AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
};
