#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <vector>
#include <memory>
#include "MapItemTrackedActor.h"
#include <string>
#include "../bedrock/util/Vec3.h"


class MapItemSavedData {

public:
    void getScale()const; // _ZNK16MapItemSavedData8getScaleEv
    void getDimensionId()const; // _ZNK16MapItemSavedData14getDimensionIdEv
    void _setPreviewIncomplete(bool); // _ZN16MapItemSavedData21_setPreviewIncompleteEb
    void getOrigin()const; // _ZNK16MapItemSavedData9getOriginEv
    void getId()const; // _ZNK16MapItemSavedData5getIdEv
    bool isPreviewIncomplete()const; // _ZNK16MapItemSavedData19isPreviewIncompleteEv
    ~MapItemSavedData(); // _ZN16MapItemSavedDataD2Ev
    std::string getSerializationKey(ActorUniqueID); // _ZN16MapItemSavedData19getSerializationKeyB5cxx11E13ActorUniqueID
    MapItemSavedData(ActorUniqueID); // _ZN16MapItemSavedDataC2E13ActorUniqueID
//  void setOrigin(Vec3, int, AutomaticID<Dimension, int>, bool, bool, BlockPos const&); //TODO: incomplete function definition // _ZN16MapItemSavedData9setOriginE4Vec3i11AutomaticIDI9DimensioniEbbRK8BlockPos
    void _clampOriginWithinLimitedWorld(BlockPos &, Vec3 const&, int)const; // _ZNK16MapItemSavedData30_clampOriginWithinLimitedWorldER8BlockPosRK4Vec3i
    void setDirty(); // _ZN16MapItemSavedData8setDirtyEv
    void setScale(int); // _ZN16MapItemSavedData8setScaleEi
//  void setDimensionId(AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN16MapItemSavedData14setDimensionIdE11AutomaticIDI9DimensioniE
    void enableUnlimitedTracking(); // _ZN16MapItemSavedData23enableUnlimitedTrackingEv
    void deserialize(CompoundTag const&); // _ZN16MapItemSavedData11deserializeERK11CompoundTag
    void _deserializeData(CompoundTag const&); // _ZN16MapItemSavedData16_deserializeDataERK11CompoundTag
    void serialize(CompoundTag &)const; // _ZNK16MapItemSavedData9serializeER11CompoundTag
    void save(LevelStorage &); // _ZN16MapItemSavedData4saveER12LevelStorage
    void getMapId()const; // _ZNK16MapItemSavedData8getMapIdEv
    void trySave(LevelStorage &); // _ZN16MapItemSavedData7trySaveER12LevelStorage
    void tickCarriedBy(Actor &, std::unique_ptr<CompoundTag> const&); // _ZN16MapItemSavedData13tickCarriedByER5ActorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS3_EE
    void _updateTrackedEntityDecorations(BlockSource &); // _ZN16MapItemSavedData31_updateTrackedEntityDecorationsER11BlockSource
//  void _addDecoration(MapDecoration::Type, Level &, MapItemTrackedActor::UniqueId const&, Vec3 const&, std::string const&, Color const&); //TODO: incomplete function definition // _ZN16MapItemSavedData14_addDecorationEN13MapDecoration4TypeER5LevelRKN19MapItemTrackedActor8UniqueIdERK4Vec3RKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK5Color
    void tickByBlock(BlockPos const&, BlockSource &); // _ZN16MapItemSavedData11tickByBlockERK8BlockPosR11BlockSource
    void _findTrackedMapEntity(BlockPos const&)const; // _ZNK16MapItemSavedData21_findTrackedMapEntityERK8BlockPos
//  void addTrackedMapEntity(BlockPos const&, BlockSource &, MapDecoration::Type); //TODO: incomplete function definition // _ZN16MapItemSavedData19addTrackedMapEntityERK8BlockPosR11BlockSourceN13MapDecoration4TypeE
    void _updateTrackedEntityDecoration(BlockSource &, std::shared_ptr<MapItemTrackedActor>); // _ZN16MapItemSavedData30_updateTrackedEntityDecorationER11BlockSourceSt10shared_ptrI19MapItemTrackedActorE
    void _removeDecoration(MapItemTrackedActor::UniqueId const&); // _ZN16MapItemSavedData17_removeDecorationERKN19MapItemTrackedActor8UniqueIdE
//  void _getColorByDimension(AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN16MapItemSavedData20_getColorByDimensionE11AutomaticIDI9DimensioniE
//  void _updateTrackedPlayerDecorations(BlockSource &, Player &, Vec3 &, std::string &, Color &, AutomaticID<Dimension, int>, MapDecoration::Type &); //TODO: incomplete function definition // _ZN16MapItemSavedData31_updateTrackedPlayerDecorationsER11BlockSourceR6PlayerR4Vec3RNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER5Color11AutomaticIDI9DimensioniERN13MapDecoration4TypeE
    void _isPlayerHoldingMap(Player &); // _ZN16MapItemSavedData19_isPlayerHoldingMapER6Player
    void _setDirtyForDecoration(MapDecoration const&); // _ZN16MapItemSavedData22_setDirtyForDecorationERK13MapDecoration
//  void addTrackedMapEntity(Actor &, MapDecoration::Type); //TODO: incomplete function definition // _ZN16MapItemSavedData19addTrackedMapEntityER5ActorN13MapDecoration4TypeE
//  void _addTrackedMapEntity(MapItemTrackedActor::UniqueId const&, BlockSource &, MapDecoration::Type); //TODO: incomplete function definition // _ZN16MapItemSavedData20_addTrackedMapEntityERKN19MapItemTrackedActor8UniqueIdER11BlockSourceN13MapDecoration4TypeE
    void _removeTrackedMapEntity(MapItemTrackedActor::UniqueId const&); // _ZN16MapItemSavedData23_removeTrackedMapEntityERKN19MapItemTrackedActor8UniqueIdE
    void removeTrackedMapEntity(Actor &); // _ZN16MapItemSavedData22removeTrackedMapEntityER5Actor
    void removeTrackedMapEntity(BlockPos const&); // _ZN16MapItemSavedData22removeTrackedMapEntityERK8BlockPos
    void getUpdatePacket(ItemStack const&, Level &, Actor &)const; // _ZNK16MapItemSavedData15getUpdatePacketERK9ItemStackR5LevelR5Actor
    void _findTrackedMapEntity(Actor &)const; // _ZNK16MapItemSavedData21_findTrackedMapEntityER5Actor
    void getUpdatePacket(Level &, BlockPos const&)const; // _ZNK16MapItemSavedData15getUpdatePacketER5LevelRK8BlockPos
    void setPixelDirty(unsigned int, unsigned int); // _ZN16MapItemSavedData13setPixelDirtyEjj
    void setPixel(unsigned int, unsigned int, unsigned int); // _ZN16MapItemSavedData8setPixelEjjj
    void getTrackedMapEntity(Actor &); // _ZN16MapItemSavedData19getTrackedMapEntityER5Actor
    void getTrackedMapEntity(BlockPos const&, BlockSource &); // _ZN16MapItemSavedData19getTrackedMapEntityERK8BlockPosR11BlockSource
    void pointInMapBounds(float, float); // _ZN16MapItemSavedData16pointInMapBoundsEff
    void addDecoration(MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>); // _ZN16MapItemSavedData13addDecorationEN19MapItemTrackedActor8UniqueIdESt10shared_ptrI13MapDecorationE
    void replaceDecorations(std::vector<std::shared_ptr<MapDecoration>>, std::vector<MapItemTrackedActor::UniqueId>); // _ZN16MapItemSavedData18replaceDecorationsESt6vectorISt10shared_ptrI13MapDecorationESaIS3_EES0_IN19MapItemTrackedActor8UniqueIdESaIS7_EE
//  void replacePixels(buffer_span<unsigned int>, unsigned int, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition // _ZN16MapItemSavedData13replacePixelsE11buffer_spanIjEjjjj
    void getParentMapId()const; // _ZNK16MapItemSavedData14getParentMapIdEv
    void setParentMapId(ActorUniqueID); // _ZN16MapItemSavedData14setParentMapIdE13ActorUniqueID
    bool hasParentMap()const; // _ZNK16MapItemSavedData12hasParentMapEv
    bool isAdjacent(MapItemSavedData const&, int)const; // _ZNK16MapItemSavedData10isAdjacentERKS_i
    bool isFullyExplored()const; // _ZNK16MapItemSavedData15isFullyExploredEv
    void getPixels()const; // _ZNK16MapItemSavedData9getPixelsEv
    void copyMapData(MapItemSavedData const&); // _ZN16MapItemSavedData11copyMapDataERKS_
    void getFullDataPacket()const; // _ZNK16MapItemSavedData17getFullDataPacketEv
    void setLocked(); // _ZN16MapItemSavedData9setLockedEv
    bool isLocked()const; // _ZNK16MapItemSavedData8isLockedEv
    void setAllPixelsDirty(); // _ZN16MapItemSavedData17setAllPixelsDirtyEv
//  bool isChunkAllEmpty(MapItemSavedData::ChunkBounds)const; //TODO: incomplete function definition // _ZNK16MapItemSavedData15isChunkAllEmptyENS_11ChunkBoundsE
//  void setMapSection(buffer_span<unsigned int>, MapItemSavedData::ChunkBounds); //TODO: incomplete function definition // _ZN16MapItemSavedData13setMapSectionE11buffer_spanIjENS_11ChunkBoundsE
    void getDecorations()const; // _ZNK16MapItemSavedData14getDecorationsEv
};
