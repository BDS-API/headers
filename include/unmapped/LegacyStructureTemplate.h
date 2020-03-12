#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include <string>
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "Block.h"
#include <memory>
#include "LegacyStructureSettings.h"


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

    std::string getMarkers(BlockPos const&, LegacyStructureSettings &)const;
//  void _transform(BlockPos, Mirror, Rotation)const; //TODO: incomplete function definition
    void _mapToProperty(std::string const&, std::string const&, Block const&);
    LegacyStructureTemplate();
    void _mapTag(std::unique_ptr<CompoundTag>, std::string const&);
    void getBlockAtPos(BlockPos const&)const;
//  void getSize(Rotation); //TODO: incomplete function definition
    void getJigsawMarkers()const;
    void _calculateRelativePosition(Vec3, LegacyStructureSettings const&)const;
//  void _transform(Vec3, Mirror, Rotation)const; //TODO: incomplete function definition
    void save(CompoundTag &);
    void setAuthor(std::string);
    void _mapToBlock(std::string const&);
//  void transform(BlockPos, Mirror, Rotation); //TODO: incomplete function definition
    bool isValid()const;
    ~LegacyStructureTemplate();
    void placeInWorld(BlockSource &, BlockPos const&, LegacyStructureSettings &)const;
    void _mapToData(Block const&, LegacyStructureSettings const&);
    void calculateConnectedPosition(LegacyStructureSettings const&, BlockPos const&, LegacyStructureSettings const&, BlockPos const&)const;
    void fillFromWorld(BlockSource &, BlockPos const&, BlockPos const&, bool);
    void _calculateRelativePosition(BlockPos, LegacyStructureSettings const&)const;
    void _mapPropertyToExtraBlock(std::string const&, std::string const&);
//  void getZeroPositionWithTransform(BlockPos const&, Mirror, Rotation); //TODO: incomplete function definition
    void fillEntityList(BlockSource &, BlockPos const&, BlockPos &);
    void load(CompoundTag &);
    void placeInWorldChunk(BlockSource &, BlockPos const&, LegacyStructureSettings &);
//  void getZeroPositionWithTransform(BlockPos const&, Mirror, Rotation, int, int); //TODO: incomplete function definition
};
