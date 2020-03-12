#pragma once

#include <memory>
#include "../bedrock/util/BlockPos.h"
#include <string>
#include "../bedrock/util/Vec3.h"


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

    bool isValid()const;
    void setAuthor(std::string);
    void calculateConnectedPosition(LegacyStructureSettings const&, BlockPos const&, LegacyStructureSettings const&, BlockPos const&)const;
    void load(CompoundTag &);
//  void getZeroPositionWithTransform(BlockPos const&, Mirror, Rotation); //TODO: incomplete function definition
    void _mapToData(Block const&, LegacyStructureSettings const&);
    void getJigsawMarkers()const;
//  void transform(BlockPos, Mirror, Rotation); //TODO: incomplete function definition
//  void _transform(Vec3, Mirror, Rotation)const; //TODO: incomplete function definition
//  void _transform(BlockPos, Mirror, Rotation)const; //TODO: incomplete function definition
    std::string getMarkers(BlockPos const&, LegacyStructureSettings &)const;
    void placeInWorld(BlockSource &, BlockPos const&, LegacyStructureSettings &)const;
//  void getZeroPositionWithTransform(BlockPos const&, Mirror, Rotation, int, int); //TODO: incomplete function definition
    void fillEntityList(BlockSource &, BlockPos const&, BlockPos &);
    LegacyStructureTemplate();
    void save(CompoundTag &);
    void _calculateRelativePosition(Vec3, LegacyStructureSettings const&)const;
    void fillFromWorld(BlockSource &, BlockPos const&, BlockPos const&, bool);
//  void getSize(Rotation); //TODO: incomplete function definition
    void placeInWorldChunk(BlockSource &, BlockPos const&, LegacyStructureSettings &);
    ~LegacyStructureTemplate();
    void _calculateRelativePosition(BlockPos, LegacyStructureSettings const&)const;
    void _mapToBlock(std::string const&);
    void getBlockAtPos(BlockPos const&)const;
    void _mapToProperty(std::string const&, std::string const&, Block const&);
    void _mapTag(std::unique_ptr<CompoundTag>, std::string const&);
    void _mapPropertyToExtraBlock(std::string const&, std::string const&);
};
