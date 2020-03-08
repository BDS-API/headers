#pragma once

#include "../bedrock/block/unmapped/BlockSource"


class MapItemTrackedActor {

public:

    void incrementStep();
    void getChunkViewSource();
    void getUniqueId()const;
    void getDimensionId();
    void getDecorationType()const;
    void setDecorationType(MapDecoration::Type);
    MapItemTrackedActor(MapItemTrackedActor::UniqueId const&, BlockSource &);
    void nextUpdatePacket(MapItemSavedData const&);
    void setPixelDirty(unsigned int, unsigned int);
    void getEntity(BlockSource &);
    void getBlockEntity(BlockSource &);
    void getDecorationRotation(BlockSource &);
};
