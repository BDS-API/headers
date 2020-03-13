#pragma once

#include <string>
#include <memory>
#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/BlockPos.h"


class LegacyStructureTemplate {

public:
    static long STRUCTURE_VERSION;
    static long CHUNK_SIZE;
    static std::string SIZE_TAG;
    static std::string AUTHOR_TAG;
    static std::string VERSION_TAG;
    static std::string PALETTE_TAG;
    static std::string BLOCKS_TAG;
    static std::string BLOCK_TAG_POS;
    static std::string BLOCK_TAG_STATE;
    static std::string BLOCK_TAG_NBT;
    static std::string ENTITIES_TAG;
    static std::string ENTITY_TAG_POS;
    static std::string ENTITY_TAG_BLOCKPOS;
    static std::string ENTITY_TAG_NBT;
    static std::string MINECRAFT_PREFIX;
    static long defaultSettings;

    LegacyStructureTemplate(); // _ZN23LegacyStructureTemplateC2Ev
    void calculateConnectedPosition(LegacyStructureSettings const&, BlockPos const&, LegacyStructureSettings const&, BlockPos const&)const; // _ZNK23LegacyStructureTemplate26calculateConnectedPositionERK23LegacyStructureSettingsRK8BlockPosS2_S5_
    void _calculateRelativePosition(BlockPos, LegacyStructureSettings const&)const; // _ZNK23LegacyStructureTemplate26_calculateRelativePositionE8BlockPosRK23LegacyStructureSettings
    std::string getMarkers(BlockPos const&, LegacyStructureSettings &)const; // _ZNK23LegacyStructureTemplate10getMarkersB5cxx11ERK8BlockPosR23LegacyStructureSettings
    void getJigsawMarkers()const; // _ZNK23LegacyStructureTemplate16getJigsawMarkersEv
    void placeInWorld(BlockSource &, BlockPos const&, LegacyStructureSettings &)const; // _ZNK23LegacyStructureTemplate12placeInWorldER11BlockSourceRK8BlockPosR23LegacyStructureSettings
    void placeInWorldChunk(BlockSource &, BlockPos const&, LegacyStructureSettings &); // _ZN23LegacyStructureTemplate17placeInWorldChunkER11BlockSourceRK8BlockPosR23LegacyStructureSettings
    void save(CompoundTag &); // _ZN23LegacyStructureTemplate4saveER11CompoundTag
    void load(CompoundTag &); // _ZN23LegacyStructureTemplate4loadER11CompoundTag
    void fillFromWorld(BlockSource &, BlockPos const&, BlockPos const&, bool); // _ZN23LegacyStructureTemplate13fillFromWorldER11BlockSourceRK8BlockPosS4_b
    void fillEntityList(BlockSource &, BlockPos const&, BlockPos &); // _ZN23LegacyStructureTemplate14fillEntityListER11BlockSourceRK8BlockPosRS2_
    void setAuthor(std::string); // _ZN23LegacyStructureTemplate9setAuthorENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getBlockAtPos(BlockPos const&)const; // _ZNK23LegacyStructureTemplate13getBlockAtPosERK8BlockPos
//  void getSize(Rotation); //TODO: incomplete function definition // _ZN23LegacyStructureTemplate7getSizeE8Rotation
//  void getZeroPositionWithTransform(BlockPos const&, Mirror, Rotation); //TODO: incomplete function definition // _ZN23LegacyStructureTemplate28getZeroPositionWithTransformERK8BlockPos6Mirror8Rotation
//  void getZeroPositionWithTransform(BlockPos const&, Mirror, Rotation, int, int); //TODO: incomplete function definition // _ZN23LegacyStructureTemplate28getZeroPositionWithTransformERK8BlockPos6Mirror8Rotationii
    bool isValid()const; // _ZNK23LegacyStructureTemplate7isValidEv
//  void transform(BlockPos, Mirror, Rotation); //TODO: incomplete function definition // _ZN23LegacyStructureTemplate9transformE8BlockPos6Mirror8Rotation
    void _calculateRelativePosition(Vec3, LegacyStructureSettings const&)const; // _ZNK23LegacyStructureTemplate26_calculateRelativePositionE4Vec3RK23LegacyStructureSettings
//  void _transform(BlockPos, Mirror, Rotation)const; //TODO: incomplete function definition // _ZNK23LegacyStructureTemplate10_transformE8BlockPos6Mirror8Rotation
//  void _transform(Vec3, Mirror, Rotation)const; //TODO: incomplete function definition // _ZNK23LegacyStructureTemplate10_transformE4Vec36Mirror8Rotation
    ~LegacyStructureTemplate(); // _ZN23LegacyStructureTemplateD2Ev
    void _mapToData(Block const&, LegacyStructureSettings const&); // _ZN23LegacyStructureTemplate10_mapToDataERK5BlockRK23LegacyStructureSettings
    void _mapPropertyToExtraBlock(std::string const&, std::string const&); // _ZN23LegacyStructureTemplate24_mapPropertyToExtraBlockERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void _mapToProperty(std::string const&, std::string const&, Block const&); // _ZN23LegacyStructureTemplate14_mapToPropertyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_RK5Block
    void _mapToBlock(std::string const&); // _ZN23LegacyStructureTemplate11_mapToBlockERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _mapTag(std::unique_ptr<CompoundTag>, std::string const&); // _ZN23LegacyStructureTemplate7_mapTagESt10unique_ptrI11CompoundTagSt14default_deleteIS1_EERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
