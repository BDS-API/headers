#pragma once

class MapItem : ComplexItem {

public:
    virtual ~MapItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void refreshedInContainer(ItemStackBase &, Level &)const;
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const;

    void MapItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, short);
    void update(Level &, Actor &, MapItemSavedData &)const;
    void sampleMapData(BlockSource &, int, BlockPos const&, BlockPos const&, int, int, std::vector<MapSample, std::allocator<MapSample>> *, MapItemSavedData *, MapItemTrackedActor *);
    void update(BlockSource &, BlockPos const&, MapItemSavedData &)const;
    void getMapId(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void _makeNewExplorationMap(ItemStack &, Level &, Actor *, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    void setItemInstanceInfo(ItemStack &, MapItemSavedData &);
    void blockTick(ItemStack &, BlockSource &, BlockPos const&)const;
    void doesDisplayPlayerMarkers(ItemStack const&);
    void setItemInstanceInfo(ItemInstance &, MapItemSavedData &);
    void setMapNameIndex(ItemStack &, int);
    void serializeMapData(std::vector<MapSample, std::allocator<MapSample>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void _scheduleMapChunkRendering(Dimension &, MapItemSavedData const&, MapItemSavedData::ChunkBounds, std::shared_ptr<bool>);
    void renderBiomePreviewMap(Dimension &, MapItemSavedData &);
};
