#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"


class LegacyStructureTemplate {

public:
    static long STRUCTURE_VERSION;
    static long CHUNK_SIZE;
    static long SIZE_TAG[abi:cxx11];
    static long AUTHOR_TAG[abi:cxx11];
    static long VERSION_TAG[abi:cxx11];
    static long PALETTE_TAG[abi:cxx11];
    static long BLOCKS_TAG[abi:cxx11];
    static long BLOCK_TAG_POS[abi:cxx11];
    static long BLOCK_TAG_STATE[abi:cxx11];
    static long BLOCK_TAG_NBT[abi:cxx11];
    static long ENTITIES_TAG[abi:cxx11];
    static long ENTITY_TAG_POS[abi:cxx11];
    static long ENTITY_TAG_BLOCKPOS[abi:cxx11];
    static long ENTITY_TAG_NBT[abi:cxx11];
    static long MINECRAFT_PREFIX[abi:cxx11];
    static long defaultSettings;


    LegacyStructureTemplate(void);
    void calculateConnectedPosition(LegacyStructureSettings const&, BlockPos const&, LegacyStructureSettings const&, BlockPos const&)const;
    void _calculateRelativePosition(BlockPos, LegacyStructureSettings const&)const;
    void getJigsawMarkers()const;
    void placeInWorld(BlockSource &, BlockPos const&, LegacyStructureSettings &)const;
    void placeInWorldChunk(BlockSource &, BlockPos const&, LegacyStructureSettings &);
    void save(CompoundTag &);
    void load(CompoundTag &);
    void fillFromWorld(BlockSource &, BlockPos const&, BlockPos const&, bool);
    void fillEntityList(BlockSource &, BlockPos const&, BlockPos&);
    void setAuthor(std::string);
    void getBlockAtPos(BlockPos const&)const;
    void getSize(Rotation);
    void getZeroPositionWithTransform(BlockPos const&, Mirror, Rotation);
    void getZeroPositionWithTransform(BlockPos const&, Mirror, Rotation, int, int);
    bool isValid()const;
    void transform(BlockPos, Mirror, Rotation);
    void _calculateRelativePosition(Vec3, LegacyStructureSettings const&)const;
    void _transform(BlockPos, Mirror, Rotation)const;
    void _transform(Vec3, Mirror, Rotation)const;
    void _mapToData(Block const&, LegacyStructureSettings const&);
    void _mapPropertyToExtraBlock(std::string const&, std::string const&);
    void _mapToProperty(std::string const&, std::string const&, Block const&);
    void _mapToBlock(std::string const&);
    void _mapTag(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>, std::string const&);
};
