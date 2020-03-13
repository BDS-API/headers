#pragma once

#include <string>
#include <memory>
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

    ~MapItem(); // _ZN7MapItemD2Ev
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK7MapItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK7MapItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const; // _ZNK7MapItem13inventoryTickER9ItemStackR5LevelR5Actorib
    virtual void refreshedInContainer(ItemStackBase &, Level &)const; // _ZNK7MapItem20refreshedInContainerER13ItemStackBaseR5Level
    virtual void fixupOnLoad(ItemStackBase &, Level &)const; // _ZNK7MapItem11fixupOnLoadER13ItemStackBaseR5Level
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const; // _ZNK7MapItem10isSameItemERK13ItemStackBaseS2_
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK7MapItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN7MapItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const; // _ZNK7MapItem15getUpdatePacketERK9ItemStackR5LevelR5Actor
    MapItem(std::string const&, short); // _ZN7MapItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEs
    void update(Level &, Actor &, MapItemSavedData &)const; // _ZNK7MapItem6updateER5LevelR5ActorR16MapItemSavedData
    void sampleMapData(BlockSource &, int, BlockPos const&, BlockPos const&, int, int, std::vector<MapSample> *, MapItemSavedData *, MapItemTrackedActor *); // _ZN7MapItem13sampleMapDataER11BlockSourceiRK8BlockPosS4_iiPSt6vectorI9MapSampleSaIS6_EEP16MapItemSavedDataP19MapItemTrackedActor
    void update(BlockSource &, BlockPos const&, MapItemSavedData &)const; // _ZNK7MapItem6updateER11BlockSourceRK8BlockPosR16MapItemSavedData
    void getMapId(std::unique_ptr<CompoundTag> const&); // _ZN7MapItem8getMapIdERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void _makeNewExplorationMap(ItemStack &, Level &, Actor *, std::string &)const; // _ZNK7MapItem22_makeNewExplorationMapER9ItemStackR5LevelP5ActorRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setItemInstanceInfo(ItemStack &, MapItemSavedData &); // _ZN7MapItem19setItemInstanceInfoER9ItemStackR16MapItemSavedData
    void blockTick(ItemStack &, BlockSource &, BlockPos const&)const; // _ZNK7MapItem9blockTickER9ItemStackR11BlockSourceRK8BlockPos
    bool doesDisplayPlayerMarkers(ItemStack const&); // _ZN7MapItem24doesDisplayPlayerMarkersERK9ItemStack
    void setItemInstanceInfo(ItemInstance &, MapItemSavedData &); // _ZN7MapItem19setItemInstanceInfoER12ItemInstanceR16MapItemSavedData
    void setMapNameIndex(ItemStack &, int); // _ZN7MapItem15setMapNameIndexER9ItemStacki
    void serializeMapData(std::vector<MapSample> const&, std::string &); // _ZN7MapItem16serializeMapDataERKSt6vectorI9MapSampleSaIS1_EERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void _scheduleMapChunkRendering(Dimension &, MapItemSavedData const&, MapItemSavedData::ChunkBounds, std::shared_ptr<bool>); //TODO: incomplete function definition // _ZN7MapItem26_scheduleMapChunkRenderingER9DimensionRK16MapItemSavedDataNS2_11ChunkBoundsESt10shared_ptrIbE
    void renderBiomePreviewMap(Dimension &, MapItemSavedData &); // _ZN7MapItem21renderBiomePreviewMapER9DimensionR16MapItemSavedData
};
