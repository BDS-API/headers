#pragma once



class MapItemTrackedActor {

public:
    class UniqueId;

    void getBlockEntity(BlockSource &);
    void incrementStep();
    void getDecorationRotation(BlockSource &);
    MapItemTrackedActor(MapItemTrackedActor::UniqueId const&, BlockSource &);
    void setPixelDirty(unsigned int, unsigned int);
    void getChunkViewSource();
    void getDecorationType()const;
    ~MapItemTrackedActor();
    void getDimensionId();
    void nextUpdatePacket(MapItemSavedData const&);
    void getEntity(BlockSource &);
    void getUniqueId()const;
//  void setDecorationType(MapDecoration::Type); //TODO: incomplete function definition
    class UniqueId {

    public:
        void save(CompoundTag &)const;
        void load(CompoundTag const&);
        UniqueId();
        UniqueId(ActorUniqueID const&);
        void operator==(MapItemTrackedActor::UniqueId const&)const;
        UniqueId(BlockPos const&);
        UniqueId(MapItemTrackedActor::UniqueId const&);
    };
};
