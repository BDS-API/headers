#pragma once

#include <functional>
#include "../../../unmapped/BuildMatch.h"


class BlockPatternBuilder {

public:
    ~BlockPatternBuilder(); // _ZN19BlockPatternBuilderD2Ev
    void start(BlockSource &); // _ZN19BlockPatternBuilder5startER11BlockSource
    BlockPatternBuilder(BlockSource &); // _ZN19BlockPatternBuilderC2ER11BlockSource
//  void aisle(int, ...); //TODO: incomplete function definition // _ZN19BlockPatternBuilder5aisleEiz
    void define(char, Block const&, std::function<bool (BlockSource &, BlockPos const&, Block const&)>); // _ZN19BlockPatternBuilder6defineEcRK5BlockSt8functionIFbR11BlockSourceRK8BlockPosS2_EE
    void build(); // _ZN19BlockPatternBuilder5buildEv
    void _allCharactersMatched(); // _ZN19BlockPatternBuilder21_allCharactersMatchedEv
    void match(BlockPos const&); // _ZN19BlockPatternBuilder5matchERK8BlockPos
    void _fitsBlockPatternEntry(int, int, BlockPos const&, Block const&); // _ZN19BlockPatternBuilder22_fitsBlockPatternEntryEiiRK8BlockPosRK5Block
    void match(BlockPos const&, int, int); // _ZN19BlockPatternBuilder5matchERK8BlockPosii
    void match(BlockPos const&, int, int, unsigned char, unsigned char); // _ZN19BlockPatternBuilder5matchERK8BlockPosiihh
    void _fitsBlockPatternEntry(int, int, BlockPos const&); // _ZN19BlockPatternBuilder22_fitsBlockPatternEntryEiiRK8BlockPos
    void replaceBlocks(char, BuildMatch, Block const&, bool); // _ZN19BlockPatternBuilder13replaceBlocksEc10BuildMatchRK5Blockb
    void _isAnyPattern(char); // _ZN19BlockPatternBuilder13_isAnyPatternEc
    void _getPattern(int, int); // _ZN19BlockPatternBuilder11_getPatternEii
    bool isReadyForMatch(); // _ZN19BlockPatternBuilder15isReadyForMatchEv
    void _getBlockPatternEntry(int, int); // _ZN19BlockPatternBuilder21_getBlockPatternEntryEii
    void _fitsAnyPattern(int, int); // _ZN19BlockPatternBuilder15_fitsAnyPatternEii
};
