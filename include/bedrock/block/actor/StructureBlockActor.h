#pragma once

#include "BlockActor.h"


class StructureBlockActor : BlockActor {

public:
    static long MAX_WIREFRAME_RENDER_DISTANCE;
    static long X_AXIS_COLOR;
    static long Y_AXIS_COLOR;
    static long Z_AXIS_COLOR;

    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    ~StructureBlockActor();
    void _activatedByRedstoneTelemetry(IMinecraftEventing &);
    void _trigger(BlockSource &, BlockPos const&, bool);
    void _loadStructure(BlockSource &, BlockPos const&);
    void setStructureData(StructureEditorData const&);
    void _saveStructure(BlockSource &, BlockPos const&, bool);
    StructureBlockActor(BlockPos const&);
    void setPowered(BlockSource &, BlockPos const&, bool, bool);
    void getStructureData()const;
};
