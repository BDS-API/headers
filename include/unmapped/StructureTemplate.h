#pragma once

#include <string>
#include "../bedrock/util/BlockPos.h"


class StructureTemplate {

public:
    void _fillBlockInfo(BlockSource &, BlockPos const&, BlockPos const&, BlockPos const&);
    void placeInWorld(BlockSource &, BlockPalette const&, BlockPos const&, StructureSettings const&, StructureTelemetryServerData *)const;
//  void _placeBlocksInWorld(BlockSource &, DataLoadHelper &, StructureBlockPalette const&, BlockPalette const&, BlockPos, BlockPos const&, Vec3 const&, Rotation, Mirror, float, unsigned int, StructureTelemetryServerData *)const; //TODO: incomplete function definition
//  void _transformBlock(Block const&, Rotation, Mirror)const; //TODO: incomplete function definition
    void load(CompoundTag const&);
    void fillFromWorld(BlockSource &, BlockPos const&, StructureSettings const&);
    bool isLoaded()const;
    void _fillEntityList(BlockSource &, BlockPos const&, BlockPos const&);
    void getSize()const;
    void _placeEntitiesInWorld(BlockSource &, DataLoadHelper &)const;
//  StructureTemplate(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    std::string getName()const;
    void save()const;
    ~StructureTemplate();
};
