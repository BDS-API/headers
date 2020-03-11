#pragma once

#include "../block/unmapped/BlockSource.h"
#include <string>
#include "./ItemStackBase.h"
#include "../../unmapped/Dimension.h"
#include "../../unmapped/MapItemSavedData.h"
#include <memory>
#include "../../unmapped/MapItemTrackedActor.h"
#include "./ItemInstance.h"
#include "../util/BlockPos.h"
#include "../../unmapped/MapSample.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include "./ComplexItem.h"
#include <vector>
#include "../nbt/CompoundTag.h"
#include "./ItemStack.h"
#include "unmapped/ItemDescriptor.h"


class MapItem : ComplexItem {

public:
    static std::string TAG_MAP_SCALING;
    static std::string TAG_MAP_SCALE;
    static std::string TAG_MAP_PLAYER_DISPLAY;
    static std::string TAG_MAP_UUID;
    static std::string TAG_MAP_NAME_INDEX;
    static std::string TAG_MAP_INIT;

    virtual ~MapItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
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
//  void _scheduleMapChunkRendering(Dimension &, MapItemSavedData const&, MapItemSavedData::ChunkBounds, std::shared_ptr<bool>); //TODO: incomplete function definition
    void renderBiomePreviewMap(Dimension &, MapItemSavedData &);
};
