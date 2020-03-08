#pragma once

#include "../BlockLegacy"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../../unmapped/Block"
#include "../../../unmapped/NewBlockID"


class BlockPalette {

public:

    BlockPalette(BlockPalette::ConstructorToken);
    BlockPalette(Level &);
    void initFromBlockDefinitions();
    void assignBlockRuntimeIds();
    void clear();
    void appendBlock(Block const&);
    void getBlockLegacy(std::string const&)const;
    void getBlockLegacy(CompoundTag const&)const;
    void getBlock(CompoundTag const&)const;
    void getBlock(unsigned int const&)const;
    void getBlockFromLegacyData(NewBlockID, unsigned int)const;
    void shouldWarnFor(NewBlockID, unsigned short)const;
    void switchBlock(Block const&, BlockLegacy const&)const;
    void convertLegacyBlock(BlockID, unsigned short)const;
    void convertLegacyBlocks(buffer_span_mut<Block const*>, buffer_span<BlockID>, buffer_span<NibblePair>, unsigned long)const;
    void getNumBlockRuntimeIds()const;
};
