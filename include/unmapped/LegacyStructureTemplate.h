#pragma once

#include "../bedrock/util/Vec3.h"
#include <memory>
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./LegacyStructureSettings.h"
#include "./Block.h"
#include "../bedrock/util/BlockPos.h"
#include <string>


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


    LegacyStructureTemplate();
    void calculateConnectedPosition(LegacyStructureSettings const&, BlockPos const&, LegacyStructureSettings const&, BlockPos const&)const;
    void _calculateRelativePosition(BlockPos, LegacyStructureSettings const&)const;
    std::string getMarkers(BlockPos const&, LegacyStructureSettings &)const;
    void getJigsawMarkers()const;
    void placeInWorld(BlockSource &, BlockPos const&, LegacyStructureSettings &)const;
    void placeInWorldChunk(BlockSource &, BlockPos const&, LegacyStructureSettings &);
    void save(CompoundTag &);
    void load(CompoundTag &);
    void fillFromWorld(BlockSource &, BlockPos const&, BlockPos const&, bool);
    void fillEntityList(BlockSource &, BlockPos const&, BlockPos &);
    void setAuthor(std::string);
    void getBlockAtPos(BlockPos const&)const;
//  void getSize(Rotation); //TODO: incomplete function definition
//  void getZeroPositionWithTransform(BlockPos const&, Mirror, Rotation); //TODO: incomplete function definition
//  void getZeroPositionWithTransform(BlockPos const&, Mirror, Rotation, int, int); //TODO: incomplete function definition
    bool isValid()const;
//  void transform(BlockPos, Mirror, Rotation); //TODO: incomplete function definition
    void _calculateRelativePosition(Vec3, LegacyStructureSettings const&)const;
//  void _transform(BlockPos, Mirror, Rotation)const; //TODO: incomplete function definition
//  void _transform(Vec3, Mirror, Rotation)const; //TODO: incomplete function definition
    ~LegacyStructureTemplate();
    void _mapToData(Block const&, LegacyStructureSettings const&);
    void _mapPropertyToExtraBlock(std::string const&, std::string const&);
    void _mapToProperty(std::string const&, std::string const&, Block const&);
    void _mapToBlock(std::string const&);
    void _mapTag(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>, std::string const&);
};
