#pragma once



class MapItemTrackedActor {

public:
    class UniqueId;

    void incrementStep(); // _ZN19MapItemTrackedActor13incrementStepEv
    void getChunkViewSource(); // _ZN19MapItemTrackedActor18getChunkViewSourceEv
    void getUniqueId()const; // _ZNK19MapItemTrackedActor11getUniqueIdEv
    void getDimensionId(); // _ZN19MapItemTrackedActor14getDimensionIdEv
    void getDecorationType()const; // _ZNK19MapItemTrackedActor17getDecorationTypeEv
//  void setDecorationType(MapDecoration::Type); //TODO: incomplete function definition // _ZN19MapItemTrackedActor17setDecorationTypeEN13MapDecoration4TypeE
    ~MapItemTrackedActor(); // _ZN19MapItemTrackedActorD2Ev
    MapItemTrackedActor(MapItemTrackedActor::UniqueId const&, BlockSource &); // _ZN19MapItemTrackedActorC2ERKNS_8UniqueIdER11BlockSource
    void nextUpdatePacket(MapItemSavedData const&); // _ZN19MapItemTrackedActor16nextUpdatePacketERK16MapItemSavedData
    void setPixelDirty(unsigned int, unsigned int); // _ZN19MapItemTrackedActor13setPixelDirtyEjj
    void getEntity(BlockSource &); // _ZN19MapItemTrackedActor9getEntityER11BlockSource
    void getBlockEntity(BlockSource &); // _ZN19MapItemTrackedActor14getBlockEntityER11BlockSource
    void getDecorationRotation(BlockSource &); // _ZN19MapItemTrackedActor21getDecorationRotationER11BlockSource
    class UniqueId {

    public:
        UniqueId(MapItemTrackedActor::UniqueId const&); // _ZN19MapItemTrackedActor8UniqueIdC2ERKS0_
        UniqueId(); // _ZN19MapItemTrackedActor8UniqueIdC2Ev
        void operator==(MapItemTrackedActor::UniqueId const&)const; // _ZNK19MapItemTrackedActor8UniqueIdeqERKS0_
        UniqueId(ActorUniqueID const&); // _ZN19MapItemTrackedActor8UniqueIdC2ERK13ActorUniqueID
        UniqueId(BlockPos const&); // _ZN19MapItemTrackedActor8UniqueIdC2ERK8BlockPos
        void load(CompoundTag const&); // _ZN19MapItemTrackedActor8UniqueId4loadERK11CompoundTag
        void save(CompoundTag &)const; // _ZNK19MapItemTrackedActor8UniqueId4saveER11CompoundTag
    };
};
