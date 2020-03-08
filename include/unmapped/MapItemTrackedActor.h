#pragma once



class MapItemTrackedActor {

public:

    void incrementStep(void);
    void getChunkViewSource(void);
    void getUniqueId(void)const;
    void getDimensionId(void);
    void getDecorationType(void)const;
    void setDecorationType(MapDecoration::Type);
    MapItemTrackedActor(MapItemTrackedActor::UniqueId const&, BlockSource &);
    void nextUpdatePacket(MapItemSavedData const&);
    void setPixelDirty(unsigned int, unsigned int);
    void getEntity(BlockSource &);
    void getBlockEntity(BlockSource &);
    void getDecorationRotation(BlockSource &);
};
