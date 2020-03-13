#pragma once

#include "BlockActor.h"


class StructureBlockActor : BlockActor {

public:
    static long MAX_WIREFRAME_RENDER_DISTANCE;
    static long X_AXIS_COLOR;
    static long Y_AXIS_COLOR;
    static long Z_AXIS_COLOR;

    ~StructureBlockActor(); // _ZN19StructureBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN19StructureBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK19StructureBlockActor4saveER11CompoundTag
    virtual void onChanged(BlockSource &); // _ZN19StructureBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN19StructureBlockActor15getUpdatePacketER11BlockSource
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN19StructureBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    StructureBlockActor(BlockPos const&); // _ZN19StructureBlockActorC2ERK8BlockPos
    void _loadStructure(BlockSource &, BlockPos const&); // _ZN19StructureBlockActor14_loadStructureER11BlockSourceRK8BlockPos
    void _saveStructure(BlockSource &, BlockPos const&, bool); // _ZN19StructureBlockActor14_saveStructureER11BlockSourceRK8BlockPosb
    void setPowered(BlockSource &, BlockPos const&, bool, bool); // _ZN19StructureBlockActor10setPoweredER11BlockSourceRK8BlockPosbb
    void _trigger(BlockSource &, BlockPos const&, bool); // _ZN19StructureBlockActor8_triggerER11BlockSourceRK8BlockPosb
    void _activatedByRedstoneTelemetry(IMinecraftEventing &); // _ZN19StructureBlockActor29_activatedByRedstoneTelemetryER18IMinecraftEventing
    void getStructureData()const; // _ZNK19StructureBlockActor16getStructureDataEv
    void setStructureData(StructureEditorData const&); // _ZN19StructureBlockActor16setStructureDataERK19StructureEditorData
};
