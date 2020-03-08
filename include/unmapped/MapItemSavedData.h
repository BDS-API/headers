#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/actor/unmapped/ActorUniqueID"
#include "../bedrock/item/ItemStack"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Player"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/level/Level"
#include "../bedrock/util/BlockPos"
#include "../bedrock/actor/Actor"
#include "../bedrock/util/Color"
#include "../bedrock/level/storage/LevelStorage"


class MapItemSavedData {

public:

    void getScale()const;
    void getDimensionId()const;
    void _setPreviewIncomplete(bool);
    void getOrigin()const;
    void getId()const;
    bool isPreviewIncomplete()const;
    MapItemSavedData(ActorUniqueID);
    void setOrigin(Vec3, int, AutomaticID<Dimension, int>, bool, bool, BlockPos const&);
    void _clampOriginWithinLimitedWorld(BlockPos &, Vec3 const&, int)const;
    void setDirty();
    void setScale(int);
    void setDimensionId(AutomaticID<Dimension, int>);
    void enableUnlimitedTracking();
    void deserialize(CompoundTag const&);
    void _deserializeData(CompoundTag const&);
    void serialize(CompoundTag &)const;
    void save(LevelStorage &);
    void getMapId()const;
    void trySave(LevelStorage &);
    void tickCarriedBy(Actor &, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void _updateTrackedEntityDecorations(BlockSource &);
    void _addDecoration(MapDecoration::Type, Level &, MapItemTrackedActor::UniqueId const&, Vec3 const&, std::string const&, Color const&);
    void tickByBlock(BlockPos const&, BlockSource &);
    void _findTrackedMapEntity(BlockPos const&)const;
    void addTrackedMapEntity(BlockPos const&, BlockSource &, MapDecoration::Type);
    void _updateTrackedEntityDecoration(BlockSource &, std::shared_ptr<MapItemTrackedActor>);
    void _removeDecoration(MapItemTrackedActor::UniqueId const&);
    void _getColorByDimension(AutomaticID<Dimension, int>);
    void _updateTrackedPlayerDecorations(BlockSource &, Player &, Vec3 &, std::string &, Color &, AutomaticID<Dimension, int>, MapDecoration::Type &);
    void _isPlayerHoldingMap(Player &);
    void _setDirtyForDecoration(MapDecoration const&);
    void addTrackedMapEntity(Actor &, MapDecoration::Type);
    void _addTrackedMapEntity(MapItemTrackedActor::UniqueId const&, BlockSource &, MapDecoration::Type);
    void _removeTrackedMapEntity(MapItemTrackedActor::UniqueId const&);
    void removeTrackedMapEntity(Actor &);
    void removeTrackedMapEntity(BlockPos const&);
    void getUpdatePacket(ItemStack const&, Level &, Actor &)const;
    void _findTrackedMapEntity(Actor &)const;
    void getUpdatePacket(Level &, BlockPos const&)const;
    void setPixelDirty(unsigned int, unsigned int);
    void setPixel(unsigned int, unsigned int, unsigned int);
    void getTrackedMapEntity(Actor &);
    void getTrackedMapEntity(BlockPos const&, BlockSource &);
    void pointInMapBounds(float, float);
    void addDecoration(MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>);
    void replaceDecorations(std::vector<std::shared_ptr<MapDecoration>, std::allocator<std::shared_ptr<MapDecoration>>>, std::vector<MapItemTrackedActor::UniqueId, std::allocator<MapItemTrackedActor::UniqueId>>);
    void replacePixels(buffer_span<unsigned int>, unsigned int, unsigned int, unsigned int, unsigned int);
    void getParentMapId()const;
    void setParentMapId(ActorUniqueID);
    bool hasParentMap()const;
    bool isAdjacent(MapItemSavedData const&, int)const;
    bool isFullyExplored()const;
    void getPixels()const;
    void copyMapData(MapItemSavedData const&);
    void getFullDataPacket()const;
    void setLocked();
    bool isLocked()const;
    void setAllPixelsDirty();
    bool isChunkAllEmpty(MapItemSavedData::ChunkBounds)const;
    void setMapSection(buffer_span<unsigned int>, MapItemSavedData::ChunkBounds);
    void getDecorations()const;
};
