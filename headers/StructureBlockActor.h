#pragma once

class StructureBlockActor : BlockActor {

public:
    static long StructureBlockActor::MAX_WIREFRAME_RENDER_DISTANCE;
    static long StructureBlockActor::X_AXIS_COLOR;
    static long StructureBlockActor::Y_AXIS_COLOR;
    static long StructureBlockActor::Z_AXIS_COLOR;

    virtual ~StructureBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);

    void StructureBlockActor(BlockPos const&);
    void _loadStructure(BlockSource &, BlockPos const&);
    void _saveStructure(BlockSource &, BlockPos const&, bool);
    void setPowered(BlockSource &, BlockPos const&, bool, bool);
    void _trigger(BlockSource &, BlockPos const&, bool);
    void _activatedByRedstoneTelemetry(IMinecraftEventing &);
    void getStructureData(void)const;
    void setStructureData(StructureEditorData const&);
};
