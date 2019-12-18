#pragma once

class LegacyStructureTemplate {

public:
    static long LegacyStructureTemplate::STRUCTURE_VERSION;
    static long LegacyStructureTemplate::CHUNK_SIZE;
    static long LegacyStructureTemplate::SIZE_TAG[abi:cxx11];
    static long LegacyStructureTemplate::AUTHOR_TAG[abi:cxx11];
    static long LegacyStructureTemplate::VERSION_TAG[abi:cxx11];
    static long LegacyStructureTemplate::PALETTE_TAG[abi:cxx11];
    static long LegacyStructureTemplate::BLOCKS_TAG[abi:cxx11];
    static long LegacyStructureTemplate::BLOCK_TAG_POS[abi:cxx11];
    static long LegacyStructureTemplate::BLOCK_TAG_STATE[abi:cxx11];
    static long LegacyStructureTemplate::BLOCK_TAG_NBT[abi:cxx11];
    static long LegacyStructureTemplate::ENTITIES_TAG[abi:cxx11];
    static long LegacyStructureTemplate::ENTITY_TAG_POS[abi:cxx11];
    static long LegacyStructureTemplate::ENTITY_TAG_BLOCKPOS[abi:cxx11];
    static long LegacyStructureTemplate::ENTITY_TAG_NBT[abi:cxx11];
    static long LegacyStructureTemplate::MINECRAFT_PREFIX[abi:cxx11];
    static long LegacyStructureTemplate::defaultSettings;


    void LegacyStructureTemplate(void);
    void calculateConnectedPosition(LegacyStructureSettings const&, BlockPos const&, LegacyStructureSettings const&, BlockPos const&)const;
    void _calculateRelativePosition(BlockPos, LegacyStructureSettings const&)const;
    void getJigsawMarkers(void)const;
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
    bool isValid(void)const;
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
