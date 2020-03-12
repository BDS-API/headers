#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/util/Color.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/level/Level.h"
#include <string>
#include "MapDecoration.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include "Dimension.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "MapItemTrackedActor.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include <memory>
#include "../bedrock/level/storage/LevelStorage.h"


class MapItemSavedData {

public:
    void _findTrackedMapEntity(Actor &)const;
    void setScale(int);
    bool isFullyExplored()const;
    void getParentMapId()const;
    void addDecoration(MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>);
    void copyMapData(MapItemSavedData const&);
    void setPixel(unsigned int, unsigned int, unsigned int);
    void _setDirtyForDecoration(MapDecoration const&);
    void getDecorations()const;
    std::string getSerializationKey(ActorUniqueID);
    void getMapId()const;
    void _removeDecoration(MapItemTrackedActor::UniqueId const&);
    void getTrackedMapEntity(BlockPos const&, BlockSource &);
//  void addTrackedMapEntity(Actor &, MapDecoration::Type); //TODO: incomplete function definition
    void getOrigin()const;
//  void _addDecoration(MapDecoration::Type, Level &, MapItemTrackedActor::UniqueId const&, Vec3 const&, std::string const&, Color const&); //TODO: incomplete function definition
    void pointInMapBounds(float, float);
    void setDirty();
    void _updateTrackedEntityDecorations(BlockSource &);
    MapItemSavedData(ActorUniqueID);
    void setPixelDirty(unsigned int, unsigned int);
    void getTrackedMapEntity(Actor &);
    void deserialize(CompoundTag const&);
    void getUpdatePacket(Level &, BlockPos const&)const;
    void getId()const;
//  bool isChunkAllEmpty(MapItemSavedData::ChunkBounds)const; //TODO: incomplete function definition
    void trySave(LevelStorage &);
//  void addTrackedMapEntity(BlockPos const&, BlockSource &, MapDecoration::Type); //TODO: incomplete function definition
    void _findTrackedMapEntity(BlockPos const&)const;
    void serialize(CompoundTag &)const;
    void _deserializeData(CompoundTag const&);
//  void setDimensionId(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void replaceDecorations(std::vector<std::shared_ptr<MapDecoration>>, std::vector<MapItemTrackedActor::UniqueId>);
//  void _addTrackedMapEntity(MapItemTrackedActor::UniqueId const&, BlockSource &, MapDecoration::Type); //TODO: incomplete function definition
    void setParentMapId(ActorUniqueID);
    void getScale()const;
    bool isPreviewIncomplete()const;
    bool hasParentMap()const;
//  void setMapSection(buffer_span<unsigned int>, MapItemSavedData::ChunkBounds); //TODO: incomplete function definition
    bool isAdjacent(MapItemSavedData const&, int)const;
    void getFullDataPacket()const;
    void _removeTrackedMapEntity(MapItemTrackedActor::UniqueId const&);
    ~MapItemSavedData();
    void getUpdatePacket(ItemStack const&, Level &, Actor &)const;
    void getPixels()const;
    void _updateTrackedEntityDecoration(BlockSource &, std::shared_ptr<MapItemTrackedActor>);
//  void replacePixels(buffer_span<unsigned int>, unsigned int, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition
    bool isLocked()const;
    void getDimensionId()const;
    void setAllPixelsDirty();
    void tickByBlock(BlockPos const&, BlockSource &);
    void _isPlayerHoldingMap(Player &);
//  void _getColorByDimension(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void _clampOriginWithinLimitedWorld(BlockPos &, Vec3 const&, int)const;
//  void setOrigin(Vec3, int, AutomaticID<Dimension, int>, bool, bool, BlockPos const&); //TODO: incomplete function definition
//  void _updateTrackedPlayerDecorations(BlockSource &, Player &, Vec3 &, std::string &, Color &, AutomaticID<Dimension, int>, MapDecoration::Type &); //TODO: incomplete function definition
    void save(LevelStorage &);
    void removeTrackedMapEntity(BlockPos const&);
    void setLocked();
    void _setPreviewIncomplete(bool);
    void enableUnlimitedTracking();
    void tickCarriedBy(Actor &, std::unique_ptr<CompoundTag> const&);
    void removeTrackedMapEntity(Actor &);
};
