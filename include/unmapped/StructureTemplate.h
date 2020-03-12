#pragma once

#include "../bedrock/block/unmapped/BlockPalette.h"
#include "StructureSettings.h"
#include "StructureTelemetryServerData.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "Block.h"
#include "StructureBlockPalette.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "DataLoadHelper.h"


class StructureTemplate {

public:
    void _fillBlockInfo(BlockSource &, BlockPos const&, BlockPos const&, BlockPos const&);
    ~StructureTemplate();
    void getSize()const;
//  void _transformBlock(Block const&, Rotation, Mirror)const; //TODO: incomplete function definition
    void _placeEntitiesInWorld(BlockSource &, DataLoadHelper &)const;
    void fillFromWorld(BlockSource &, BlockPos const&, StructureSettings const&);
    void load(CompoundTag const&);
    std::string getName()const;
    void _fillEntityList(BlockSource &, BlockPos const&, BlockPos const&);
//  StructureTemplate(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  void _placeBlocksInWorld(BlockSource &, DataLoadHelper &, StructureBlockPalette const&, BlockPalette const&, BlockPos, BlockPos const&, Vec3 const&, Rotation, Mirror, float, unsigned int, StructureTelemetryServerData *)const; //TODO: incomplete function definition
    void placeInWorld(BlockSource &, BlockPalette const&, BlockPos const&, StructureSettings const&, StructureTelemetryServerData *)const;
    void save()const;
    bool isLoaded()const;
};
