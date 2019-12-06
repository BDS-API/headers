#pragma once

class LegacyStructureTemplate {

public:
    static long LegacyStructureTemplate::STRUCTURE_VERSION;
    static long LegacyStructureTemplate::CHUNK_SIZE;
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
    void setAuthor(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
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
    void _mapPropertyToExtraBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _mapToProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Block const&);
    void _mapToBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _mapTag(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};