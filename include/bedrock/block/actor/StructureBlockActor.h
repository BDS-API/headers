#pragma once

#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../eventing/IMinecraftEventing.h"
#include "../../../unmapped/StructureEditorData.h"
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include "../unmapped/BlockSource.h"


class StructureBlockActor : BlockActor {

public:
    static long MAX_WIREFRAME_RENDER_DISTANCE;
    static long X_AXIS_COLOR;
    static long Y_AXIS_COLOR;
    static long Z_AXIS_COLOR;

    virtual ~StructureBlockActor();
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
