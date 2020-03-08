#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/block/unmapped/BlockPalette"


class StructureTemplate {

public:

    StructureTemplate(gsl::basic_string_span<char const, -1l>);
    void load(CompoundTag const&);
    void save()const;
    void fillFromWorld(BlockSource &, BlockPos const&, StructureSettings const&);
    void _fillBlockInfo(BlockSource &, BlockPos const&, BlockPos const&, BlockPos const&);
    void _fillEntityList(BlockSource &, BlockPos const&, BlockPos const&);
    void placeInWorld(BlockSource &, BlockPalette const&, BlockPos const&, StructureSettings const&, StructureTelemetryServerData *)const;
    void _placeBlocksInWorld(BlockSource &, DataLoadHelper &, StructureBlockPalette const&, BlockPalette const&, BlockPos, BlockPos const&, Vec3 const&, Rotation, Mirror, float, unsigned int, StructureTelemetryServerData *)const;
    void _placeEntitiesInWorld(BlockSource &, DataLoadHelper &)const;
    void getSize()const;
    bool isLoaded()const;
    void _transformBlock(Block const&, Rotation, Mirror)const;
};
