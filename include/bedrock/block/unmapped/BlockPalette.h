#pragma once

#include "../../../unmapped/Block.h"
#include "../../nbt/CompoundTag.h"
#include "./BlockID.h"
#include "../BlockLegacy.h"
#include "../../level/Level.h"
#include "../../../unmapped/NewBlockID.h"
#include <string>


class BlockPalette {

public:

//  BlockPalette(BlockPalette::ConstructorToken); //TODO: incomplete function definition
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
//  void convertLegacyBlocks(buffer_span_mut<Block const*>, buffer_span<BlockID>, buffer_span<NibblePair>, unsigned long)const; //TODO: incomplete function definition
    void getNumBlockRuntimeIds()const;
    ~BlockPalette();
};
