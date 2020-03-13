#pragma once

#include <string>
#include "../../../unmapped/NewBlockID.h"
#include "BlockID.h"


class BlockPalette {

public:
//  BlockPalette(BlockPalette::ConstructorToken); //TODO: incomplete function definition // _ZN12BlockPaletteC2ENS_16ConstructorTokenE
    BlockPalette(Level &); // _ZN12BlockPaletteC2ER5Level
    void initFromBlockDefinitions(); // _ZN12BlockPalette24initFromBlockDefinitionsEv
    void assignBlockRuntimeIds(); // _ZN12BlockPalette21assignBlockRuntimeIdsEv
    void clear(); // _ZN12BlockPalette5clearEv
    void appendBlock(Block const&); // _ZN12BlockPalette11appendBlockERK5Block
    void getBlockLegacy(std::string const&)const; // _ZNK12BlockPalette14getBlockLegacyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getBlockLegacy(CompoundTag const&)const; // _ZNK12BlockPalette14getBlockLegacyERK11CompoundTag
    void getBlock(CompoundTag const&)const; // _ZNK12BlockPalette8getBlockERK11CompoundTag
    void getBlock(unsigned int const&)const; // _ZNK12BlockPalette8getBlockERKj
    void getBlockFromLegacyData(NewBlockID, unsigned int)const; // _ZNK12BlockPalette22getBlockFromLegacyDataE10NewBlockIDj
    void shouldWarnFor(NewBlockID, unsigned short)const; // _ZNK12BlockPalette13shouldWarnForE10NewBlockIDt
    void switchBlock(Block const&, BlockLegacy const&)const; // _ZNK12BlockPalette11switchBlockERK5BlockRK11BlockLegacy
    void convertLegacyBlock(BlockID, unsigned short)const; // _ZNK12BlockPalette18convertLegacyBlockE7BlockIDt
//  void convertLegacyBlocks(buffer_span_mut<Block const*>, buffer_span<BlockID>, buffer_span<NibblePair>, unsigned long)const; //TODO: incomplete function definition // _ZNK12BlockPalette19convertLegacyBlocksE15buffer_span_mutIPK5BlockE11buffer_spanI7BlockIDES5_I10NibblePairEm
    void getNumBlockRuntimeIds()const; // _ZNK12BlockPalette21getNumBlockRuntimeIdsEv
    ~BlockPalette(); // _ZN12BlockPaletteD2Ev
};
