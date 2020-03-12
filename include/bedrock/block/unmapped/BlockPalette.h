#pragma once

#include <string>
#include "BlockID.h"
#include "../../../unmapped/NewBlockID.h"


class BlockPalette {

public:
    void getBlockFromLegacyData(NewBlockID, unsigned int)const;
    void appendBlock(Block const&);
    void initFromBlockDefinitions();
    ~BlockPalette();
    void clear();
    void convertLegacyBlock(BlockID, unsigned short)const;
    void shouldWarnFor(NewBlockID, unsigned short)const;
//  BlockPalette(BlockPalette::ConstructorToken); //TODO: incomplete function definition
    BlockPalette(Level &);
    void getBlockLegacy(CompoundTag const&)const;
    void getBlock(CompoundTag const&)const;
    void getBlock(unsigned int const&)const;
    void getBlockLegacy(std::string const&)const;
    void switchBlock(Block const&, BlockLegacy const&)const;
    void getNumBlockRuntimeIds()const;
//  void convertLegacyBlocks(buffer_span_mut<Block const*>, buffer_span<BlockID>, buffer_span<NibblePair>, unsigned long)const; //TODO: incomplete function definition
    void assignBlockRuntimeIds();
};
