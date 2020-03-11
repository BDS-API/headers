#pragma once

#include "../bedrock/util/Vec3.h"
#include "./Block.h"
#include "./DataLoadHelper.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./StructureSettings.h"
#include "../bedrock/block/unmapped/BlockPalette.h"
#include "./StructureBlockPalette.h"
#include "./StructureTelemetryServerData.h"
#include "../bedrock/util/BlockPos.h"
#include <string>


class StructureTemplate {

public:

    ~StructureTemplate();
//  StructureTemplate(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void load(CompoundTag const&);
    void save()const;
    void fillFromWorld(BlockSource &, BlockPos const&, StructureSettings const&);
    void _fillBlockInfo(BlockSource &, BlockPos const&, BlockPos const&, BlockPos const&);
    void _fillEntityList(BlockSource &, BlockPos const&, BlockPos const&);
    void placeInWorld(BlockSource &, BlockPalette const&, BlockPos const&, StructureSettings const&, StructureTelemetryServerData *)const;
//  void _placeBlocksInWorld(BlockSource &, DataLoadHelper &, StructureBlockPalette const&, BlockPalette const&, BlockPos, BlockPos const&, Vec3 const&, Rotation, Mirror, float, unsigned int, StructureTelemetryServerData *)const; //TODO: incomplete function definition
    void _placeEntitiesInWorld(BlockSource &, DataLoadHelper &)const;
    void getSize()const;
    std::string getName()const;
    bool isLoaded()const;
//  void _transformBlock(Block const&, Rotation, Mirror)const; //TODO: incomplete function definition
};
