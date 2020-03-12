#pragma once

#include <memory>
#include <string>
#include "ComplexItem.h"
#include <vector>


class MapItem : ComplexItem {

public:
    static std::string TAG_MAP_SCALING;
    static std::string TAG_MAP_SCALE;
    static std::string TAG_MAP_PLAYER_DISPLAY;
    static std::string TAG_MAP_UUID;
    static std::string TAG_MAP_NAME_INDEX;
    static std::string TAG_MAP_INIT;

    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void refreshedInContainer(ItemStackBase &, Level &)const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;
    ~MapItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    void setMapNameIndex(ItemStack &, int);
    void update(BlockSource &, BlockPos const&, MapItemSavedData &)const;
    MapItem(std::string const&, short);
    bool doesDisplayPlayerMarkers(ItemStack const&);
    void renderBiomePreviewMap(Dimension &, MapItemSavedData &);
    void serializeMapData(std::vector<MapSample> const&, std::string &);
    void setItemInstanceInfo(ItemStack &, MapItemSavedData &);
//  void _scheduleMapChunkRendering(Dimension &, MapItemSavedData const&, MapItemSavedData::ChunkBounds, std::shared_ptr<bool>); //TODO: incomplete function definition
    void _makeNewExplorationMap(ItemStack &, Level &, Actor *, std::string &)const;
    void setItemInstanceInfo(ItemInstance &, MapItemSavedData &);
    void sampleMapData(BlockSource &, int, BlockPos const&, BlockPos const&, int, int, std::vector<MapSample> *, MapItemSavedData *, MapItemTrackedActor *);
    void getMapId(std::unique_ptr<CompoundTag> const&);
    void blockTick(ItemStack &, BlockSource &, BlockPos const&)const;
    void update(Level &, Actor &, MapItemSavedData &)const;
};
