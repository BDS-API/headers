#pragma once

#include "../bedrock/util/Vec3.h"
#include <memory>
#include <vector>
#include "MapItemTrackedActor.h"
#include <string>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class MapItemSavedData {

public:
    void serialize(CompoundTag &)const;
    bool isAdjacent(MapItemSavedData const&, int)const;
    bool isFullyExplored()const;
    void setLocked();
    ~MapItemSavedData();
//  void setDimensionId(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void _updateTrackedEntityDecorations(BlockSource &);
    void tickByBlock(BlockPos const&, BlockSource &);
    void pointInMapBounds(float, float);
    void getTrackedMapEntity(BlockPos const&, BlockSource &);
    void trySave(LevelStorage &);
    void getTrackedMapEntity(Actor &);
    void _deserializeData(CompoundTag const&);
    void removeTrackedMapEntity(BlockPos const&);
//  bool isChunkAllEmpty(MapItemSavedData::ChunkBounds)const; //TODO: incomplete function definition
    void setParentMapId(ActorUniqueID);
    void deserialize(CompoundTag const&);
    void getId()const;
    void setAllPixelsDirty();
//  void setOrigin(Vec3, int, AutomaticID<Dimension, int>, bool, bool, BlockPos const&); //TODO: incomplete function definition
//  void _addDecoration(MapDecoration::Type, Level &, MapItemTrackedActor::UniqueId const&, Vec3 const&, std::string const&, Color const&); //TODO: incomplete function definition
    bool isPreviewIncomplete()const;
    void setPixelDirty(unsigned int, unsigned int);
    bool hasParentMap()const;
    void save(LevelStorage &);
    void copyMapData(MapItemSavedData const&);
    bool isLocked()const;
    void getUpdatePacket(ItemStack const&, Level &, Actor &)const;
    void _findTrackedMapEntity(Actor &)const;
    void _isPlayerHoldingMap(Player &);
    void _setDirtyForDecoration(MapDecoration const&);
    void getScale()const;
    void enableUnlimitedTracking();
    void _findTrackedMapEntity(BlockPos const&)const;
    void _removeDecoration(MapItemTrackedActor::UniqueId const&);
    void _updateTrackedEntityDecoration(BlockSource &, std::shared_ptr<MapItemTrackedActor>);
    void tickCarriedBy(Actor &, std::unique_ptr<CompoundTag> const&);
    void getOrigin()const;
    void getFullDataPacket()const;
//  void addTrackedMapEntity(BlockPos const&, BlockSource &, MapDecoration::Type); //TODO: incomplete function definition
    void replaceDecorations(std::vector<std::shared_ptr<MapDecoration>>, std::vector<MapItemTrackedActor::UniqueId>);
//  void _addTrackedMapEntity(MapItemTrackedActor::UniqueId const&, BlockSource &, MapDecoration::Type); //TODO: incomplete function definition
    MapItemSavedData(ActorUniqueID);
    void _removeTrackedMapEntity(MapItemTrackedActor::UniqueId const&);
    void getParentMapId()const;
    void getDimensionId()const;
    void _setPreviewIncomplete(bool);
//  void setMapSection(buffer_span<unsigned int>, MapItemSavedData::ChunkBounds); //TODO: incomplete function definition
    void _clampOriginWithinLimitedWorld(BlockPos &, Vec3 const&, int)const;
//  void _updateTrackedPlayerDecorations(BlockSource &, Player &, Vec3 &, std::string &, Color &, AutomaticID<Dimension, int>, MapDecoration::Type &); //TODO: incomplete function definition
    void setPixel(unsigned int, unsigned int, unsigned int);
    void getDecorations()const;
//  void replacePixels(buffer_span<unsigned int>, unsigned int, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition
//  void _getColorByDimension(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    std::string getSerializationKey(ActorUniqueID);
    void setDirty();
    void addDecoration(MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>);
    void getMapId()const;
//  void addTrackedMapEntity(Actor &, MapDecoration::Type); //TODO: incomplete function definition
    void getPixels()const;
    void setScale(int);
    void getUpdatePacket(Level &, BlockPos const&)const;
    void removeTrackedMapEntity(Actor &);
};
