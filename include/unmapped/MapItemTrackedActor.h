#pragma once

#include "MapItemSavedData.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/nbt/CompoundTag.h"


class MapItemTrackedActor {

public:
    class UniqueId;

    void incrementStep();
    void getDimensionId();
    ~MapItemTrackedActor();
    void getUniqueId()const;
    void getBlockEntity(BlockSource &);
    void setPixelDirty(unsigned int, unsigned int);
//  void setDecorationType(MapDecoration::Type); //TODO: incomplete function definition
    void nextUpdatePacket(MapItemSavedData const&);
    void getDecorationType()const;
    void getEntity(BlockSource &);
    void getDecorationRotation(BlockSource &);
    MapItemTrackedActor(MapItemTrackedActor::UniqueId const&, BlockSource &);
    void getChunkViewSource();
    class UniqueId {

    public:
        void load(CompoundTag const&);
        void operator==(MapItemTrackedActor::UniqueId const&)const;
        void save(CompoundTag &)const;
        UniqueId(MapItemTrackedActor::UniqueId const&);
        UniqueId(BlockPos const&);
        UniqueId();
        UniqueId(ActorUniqueID const&);
    };
};
