#pragma once

class MapItemSavedData {

public:

    void getScale(void)const;
    void getDimensionId(void)const;
    void _setPreviewIncomplete(bool);
    void getOrigin(void)const;
    void getId(void)const;
    bool isPreviewIncomplete(void)const;
    MapItemSavedData(ActorUniqueID);
    void setOrigin(Vec3, int, AutomaticID<Dimension, int>, bool, bool, BlockPos const&);
    void _clampOriginWithinLimitedWorld(BlockPos &, Vec3 const&, int)const;
    void setDirty(void);
    void setScale(int);
    void setDimensionId(AutomaticID<Dimension, int>);
    void enableUnlimitedTracking(void);
    void deserialize(CompoundTag const&);
    void _deserializeData(CompoundTag const&);
    void serialize(CompoundTag &)const;
    void save(LevelStorage &);
    void getMapId(void)const;
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
    void getParentMapId(void)const;
    void setParentMapId(ActorUniqueID);
    bool hasParentMap(void)const;
    bool isAdjacent(MapItemSavedData const&, int)const;
    bool isFullyExplored(void)const;
    void getPixels(void)const;
    void copyMapData(MapItemSavedData const&);
    void getFullDataPacket(void)const;
    void setLocked(void);
    bool isLocked(void)const;
    void setAllPixelsDirty(void);
    bool isChunkAllEmpty(MapItemSavedData::ChunkBounds)const;
    void setMapSection(buffer_span<unsigned int>, MapItemSavedData::ChunkBounds);
    void getDecorations(void)const;
};
