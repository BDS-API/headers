#pragma once

#include "../../../unmapped/Block.h"
#include "./BlockSource.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/BuildMatch.h"
#include <functional>


class BlockPatternBuilder {

public:

    ~BlockPatternBuilder();
    void start(BlockSource &);
    BlockPatternBuilder(BlockSource &);
//  void aisle(int, ...); //TODO: incomplete function definition
    void define(char, Block const&, std::function<bool (BlockSource &, BlockPos const&, Block const&)>);
    void build();
    void _allCharactersMatched();
    void match(BlockPos const&);
    void _fitsBlockPatternEntry(int, int, BlockPos const&, Block const&);
    void match(BlockPos const&, int, int);
    void match(BlockPos const&, int, int, unsigned char, unsigned char);
    void _fitsBlockPatternEntry(int, int, BlockPos const&);
    void replaceBlocks(char, BuildMatch, Block const&, bool);
    void _isAnyPattern(char);
    void _getPattern(int, int);
    bool isReadyForMatch();
    void _getBlockPatternEntry(int, int);
    void _fitsAnyPattern(int, int);
};
