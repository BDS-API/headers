#pragma once

class BlockPalette {

public:

    void BlockPalette(BlockPalette::ConstructorToken);
    void BlockPalette(Level &);
    void initFromBlockDefinitions(void);
    void assignBlockRuntimeIds(void);
    void clear(void);
    void appendBlock(Block const&);
    void getBlockLegacy(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getBlockLegacy(CompoundTag const&)const;
    void getBlock(CompoundTag const&)const;
    void getBlock(unsigned int const&)const;
    void getBlockFromLegacyData(NewBlockID, unsigned int)const;
    void shouldWarnFor(NewBlockID, unsigned short)const;
    void switchBlock(Block const&, BlockLegacy const&)const;
    void convertLegacyBlock(BlockID, unsigned short)const;
    void convertLegacyBlocks(buffer_span_mut<Block const*>, buffer_span<BlockID>, buffer_span<NibblePair>, unsigned long)const;
    void getNumBlockRuntimeIds(void)const;
};
