#pragma once

class StructureBlockPalette {

public:

    void StructureBlockPalette(void);
    void StructureBlockPalette(StructureBlockPalette&&);
    void load(CompoundTag const&, int);
    void _parseBlockPalette(CompoundTag const&);
    void _parseBlockPositionDataList(CompoundTag const&);
    void save(void)const;
    void _saveBlockPalette(CompoundTag &)const;
    void _saveBlockPositionDataList(CompoundTag &)const;
    void getBlock(BlockPalette const&, unsigned long)const;
    void _getSerializationId(unsigned long)const;
    void getBlockPositionData(unsigned long)const;
    void addMapping(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void addBlockPositionData(unsigned long, StructureBlockPalette::BlockPositionData);
    void clear(void);
    void getSize(void)const;
    void _contentErrorMissingField(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void _parseBlockPositionData(CompoundTag const&, int);
};
