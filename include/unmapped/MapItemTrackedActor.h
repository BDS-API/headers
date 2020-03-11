#pragma once

#include "./MapItemSavedData.h"
#include "./UniqueId.h"
#include "../bedrock/block/unmapped/BlockSource.h"


class MapItemTrackedActor {

public:

    void incrementStep();
    void getChunkViewSource();
    void getUniqueId()const;
    void getDimensionId();
    void getDecorationType()const;
//  void setDecorationType(MapDecoration::Type); //TODO: incomplete function definition
    ~MapItemTrackedActor();
    MapItemTrackedActor(MapItemTrackedActor::UniqueId const&, BlockSource &);
    void nextUpdatePacket(MapItemSavedData const&);
    void setPixelDirty(unsigned int, unsigned int);
    void getEntity(BlockSource &);
    void getBlockEntity(BlockSource &);
    void getDecorationRotation(BlockSource &);
};
