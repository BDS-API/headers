#pragma once

#include "ComplexItem.h"
#include "../../unmapped/MapSample.h"
#include <string>
#include "ItemStack.h"
#include "../level/Level.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../../unmapped/Dimension.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/MapItemSavedData.h"
#include "ItemStackBase.h"
#include <memory>
#include "ItemInstance.h"
#include <vector>
#include "../block/unmapped/BlockSource.h"
#include "../../unmapped/MapItemTrackedActor.h"
#include "unmapped/ItemDescriptor.h"


class MapItem : ComplexItem {

public:
    static std::string TAG_MAP_SCALING;
    static std::string TAG_MAP_SCALE;
    static std::string TAG_MAP_PLAYER_DISPLAY;
    static std::string TAG_MAP_UUID;
    static std::string TAG_MAP_NAME_INDEX;
    static std::string TAG_MAP_INIT;

    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;
    virtual void refreshedInContainer(ItemStackBase &, Level &)const;
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;
    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const;
    ~MapItem();
    virtual void setIcon(std::string const&, int);
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    void setMapNameIndex(ItemStack &, int);
    MapItem(std::string const&, short);
    void _makeNewExplorationMap(ItemStack &, Level &, Actor *, std::string &)const;
    void blockTick(ItemStack &, BlockSource &, BlockPos const&)const;
    bool doesDisplayPlayerMarkers(ItemStack const&);
    void renderBiomePreviewMap(Dimension &, MapItemSavedData &);
    void sampleMapData(BlockSource &, int, BlockPos const&, BlockPos const&, int, int, std::vector<MapSample> *, MapItemSavedData *, MapItemTrackedActor *);
    void serializeMapData(std::vector<MapSample> const&, std::string &);
    void setItemInstanceInfo(ItemStack &, MapItemSavedData &);
    void update(Level &, Actor &, MapItemSavedData &)const;
    void getMapId(std::unique_ptr<CompoundTag> const&);
    void setItemInstanceInfo(ItemInstance &, MapItemSavedData &);
    void update(BlockSource &, BlockPos const&, MapItemSavedData &)const;
//  void _scheduleMapChunkRendering(Dimension &, MapItemSavedData const&, MapItemSavedData::ChunkBounds, std::shared_ptr<bool>); //TODO: incomplete function definition
};
