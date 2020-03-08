#pragma once

#include "../../unmapped/Dimension"
#include "../nbt/CompoundTag"
#include "../block/unmapped/BlockSource"
#include "../level/Level"
#include "../util/BlockPos"
#include "../../unmapped/MapItemSavedData"
#include "../../unmapped/MapSample"
#include "../actor/Actor"
#include "../../unmapped/MapItemTrackedActor"
#include "unmapped/ItemDescriptor"


class MapItem : ComplexItem {

public:
    static long TAG_MAP_SCALING[abi:cxx11];
    static long TAG_MAP_SCALE[abi:cxx11];
    static long TAG_MAP_PLAYER_DISPLAY[abi:cxx11];
    static long TAG_MAP_UUID[abi:cxx11];
    static long TAG_MAP_NAME_INDEX[abi:cxx11];
    static long TAG_MAP_INIT[abi:cxx11];

    virtual MapItem::~MapItem()
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void refreshedInContainer(ItemStackBase &, Level &)const;
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const;

    MapItem(std::string const&, short);
    void update(Level &, Actor &, MapItemSavedData &)const;
    void sampleMapData(BlockSource &, int, BlockPos const&, BlockPos const&, int, int, std::vector<MapSample, std::allocator<MapSample>> *, MapItemSavedData *, MapItemTrackedActor *);
    void update(BlockSource &, BlockPos const&, MapItemSavedData &)const;
    void getMapId(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void _makeNewExplorationMap(ItemStack &, Level &, Actor *, std::string &)const;
    void setItemInstanceInfo(ItemStack &, MapItemSavedData &);
    void blockTick(ItemStack &, BlockSource &, BlockPos const&)const;
    bool doesDisplayPlayerMarkers(ItemStack const&);
    void setItemInstanceInfo(ItemInstance &, MapItemSavedData &);
    void setMapNameIndex(ItemStack &, int);
    void serializeMapData(std::vector<MapSample, std::allocator<MapSample>> const&, std::string &);
    void _scheduleMapChunkRendering(Dimension &, MapItemSavedData const&, MapItemSavedData::ChunkBounds, std::shared_ptr<bool>);
    void renderBiomePreviewMap(Dimension &, MapItemSavedData &);
};
