#pragma once

#include "../BlockLegacy.h"
#include "../../../unmapped/Block.h"
#include <string>
#include "../../level/Level.h"
#include "BlockID.h"
#include "../../nbt/CompoundTag.h"
#include "../../../unmapped/NewBlockID.h"


class BlockPalette {

public:
//  void convertLegacyBlocks(buffer_span_mut<Block const*>, buffer_span<BlockID>, buffer_span<NibblePair>, unsigned long)const; //TODO: incomplete function definition
    void shouldWarnFor(NewBlockID, unsigned short)const;
    void getNumBlockRuntimeIds()const;
    ~BlockPalette();
    BlockPalette(Level &);
    void clear();
    void getBlockFromLegacyData(NewBlockID, unsigned int)const;
    void switchBlock(Block const&, BlockLegacy const&)const;
    void initFromBlockDefinitions();
    void appendBlock(Block const&);
    void getBlock(unsigned int const&)const;
    void getBlockLegacy(CompoundTag const&)const;
    void convertLegacyBlock(BlockID, unsigned short)const;
    void assignBlockRuntimeIds();
//  BlockPalette(BlockPalette::ConstructorToken); //TODO: incomplete function definition
    void getBlock(CompoundTag const&)const;
    void getBlockLegacy(std::string const&)const;
};
