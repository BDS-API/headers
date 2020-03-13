#pragma once

#include <string>
#include "../bedrock/util/BlockPos.h"


class StructureTemplate {

public:
    ~StructureTemplate(); // _ZN17StructureTemplateD2Ev
//  StructureTemplate(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN17StructureTemplateC2EN3gsl17basic_string_spanIKcLln1EEE
    void load(CompoundTag const&); // _ZN17StructureTemplate4loadERK11CompoundTag
    void save()const; // _ZNK17StructureTemplate4saveEv
    void fillFromWorld(BlockSource &, BlockPos const&, StructureSettings const&); // _ZN17StructureTemplate13fillFromWorldER11BlockSourceRK8BlockPosRK17StructureSettings
    void _fillBlockInfo(BlockSource &, BlockPos const&, BlockPos const&, BlockPos const&); // _ZN17StructureTemplate14_fillBlockInfoER11BlockSourceRK8BlockPosS4_S4_
    void _fillEntityList(BlockSource &, BlockPos const&, BlockPos const&); // _ZN17StructureTemplate15_fillEntityListER11BlockSourceRK8BlockPosS4_
    void placeInWorld(BlockSource &, BlockPalette const&, BlockPos const&, StructureSettings const&, StructureTelemetryServerData *)const; // _ZNK17StructureTemplate12placeInWorldER11BlockSourceRK12BlockPaletteRK8BlockPosRK17StructureSettingsP28StructureTelemetryServerData
//  void _placeBlocksInWorld(BlockSource &, DataLoadHelper &, StructureBlockPalette const&, BlockPalette const&, BlockPos, BlockPos const&, Vec3 const&, Rotation, Mirror, float, unsigned int, StructureTelemetryServerData *)const; //TODO: incomplete function definition // _ZNK17StructureTemplate19_placeBlocksInWorldER11BlockSourceR14DataLoadHelperRK21StructureBlockPaletteRK12BlockPalette8BlockPosRKSA_RK4Vec38Rotation6MirrorfjP28StructureTelemetryServerData
    void _placeEntitiesInWorld(BlockSource &, DataLoadHelper &)const; // _ZNK17StructureTemplate21_placeEntitiesInWorldER11BlockSourceR14DataLoadHelper
    void getSize()const; // _ZNK17StructureTemplate7getSizeEv
    std::string getName()const; // _ZNK17StructureTemplate7getNameB5cxx11Ev
    bool isLoaded()const; // _ZNK17StructureTemplate8isLoadedEv
//  void _transformBlock(Block const&, Rotation, Mirror)const; //TODO: incomplete function definition // _ZNK17StructureTemplate15_transformBlockERK5Block8Rotation6Mirror
};
