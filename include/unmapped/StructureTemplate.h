#pragma once

#include "../bedrock/nbt/CompoundTag"


class StructureTemplate {

public:

    StructureTemplate(gsl::basic_string_span<char const, -1l>);
    void load(CompoundTag const&);
    void save(void)const;
    void fillFromWorld(BlockSource &, BlockPos const&, StructureSettings const&);
    void _fillBlockInfo(BlockSource &, BlockPos const&, BlockPos const&, BlockPos const&);
    void _fillEntityList(BlockSource &, BlockPos const&, BlockPos const&);
    void placeInWorld(BlockSource &, BlockPalette const&, BlockPos const&, StructureSettings const&, StructureTelemetryServerData *)const;
    void _placeBlocksInWorld(BlockSource &, DataLoadHelper &, StructureBlockPalette const&, BlockPalette const&, BlockPos, BlockPos const&, Vec3 const&, Rotation, Mirror, float, unsigned int, StructureTelemetryServerData *)const;
    void _placeEntitiesInWorld(BlockSource &, DataLoadHelper &)const;
    void getSize(void)const;
    bool isLoaded(void)const;
    void _transformBlock(Block const&, Rotation, Mirror)const;
};
