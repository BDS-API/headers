#pragma once

#include "../unmapped/BlockSource"
#include "../../eventing/IMinecraftEventing"
#include "../../nbt/CompoundTag"
#include "../../../unmapped/StructureEditorData"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../../unmapped/DataLoadHelper"


class StructureBlockActor : BlockActor {

public:
    static long MAX_WIREFRAME_RENDER_DISTANCE;
    static long X_AXIS_COLOR;
    static long Y_AXIS_COLOR;
    static long Z_AXIS_COLOR;

    virtual StructureBlockActor::~StructureBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    StructureBlockActor(BlockPos const&);
    void _loadStructure(BlockSource &, BlockPos const&);
    void _saveStructure(BlockSource &, BlockPos const&, bool);
    void setPowered(BlockSource &, BlockPos const&, bool, bool);
    void _trigger(BlockSource &, BlockPos const&, bool);
    void _activatedByRedstoneTelemetry(IMinecraftEventing &);
    void getStructureData()const;
    void setStructureData(StructureEditorData const&);
};
