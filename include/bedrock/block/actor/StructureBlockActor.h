#pragma once

#include "BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../../unmapped/StructureEditorData.h"
#include "../../eventing/IMinecraftEventing.h"
#include "../../util/BlockPos.h"


class StructureBlockActor : BlockActor {

public:
    static long MAX_WIREFRAME_RENDER_DISTANCE;
    static long X_AXIS_COLOR;
    static long Y_AXIS_COLOR;
    static long Z_AXIS_COLOR;

    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void onChanged(BlockSource &);
    ~StructureBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    void _loadStructure(BlockSource &, BlockPos const&);
    void _saveStructure(BlockSource &, BlockPos const&, bool);
    StructureBlockActor(BlockPos const&);
    void getStructureData()const;
    void _activatedByRedstoneTelemetry(IMinecraftEventing &);
    void setStructureData(StructureEditorData const&);
    void _trigger(BlockSource &, BlockPos const&, bool);
    void setPowered(BlockSource &, BlockPos const&, bool, bool);
};
