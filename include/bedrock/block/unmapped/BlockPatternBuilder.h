#pragma once

#include "../../../unmapped/Block.h"
#include "../../../unmapped/BuildMatch.h"
#include <functional>
#include "BlockSource.h"
#include "../../util/BlockPos.h"


class BlockPatternBuilder {

public:
    void replaceBlocks(char, BuildMatch, Block const&, bool);
    void _getPattern(int, int);
    BlockPatternBuilder(BlockSource &);
    ~BlockPatternBuilder();
    bool isReadyForMatch();
    void _fitsBlockPatternEntry(int, int, BlockPos const&, Block const&);
    void build();
    void _isAnyPattern(char);
    void _fitsAnyPattern(int, int);
    void match(BlockPos const&);
    void match(BlockPos const&, int, int, unsigned char, unsigned char);
    void define(char, Block const&, std::function<bool (BlockSource &, BlockPos const&, Block const&)>);
    void _getBlockPatternEntry(int, int);
//  void aisle(int, ...); //TODO: incomplete function definition
    void match(BlockPos const&, int, int);
    void _fitsBlockPatternEntry(int, int, BlockPos const&);
    void _allCharactersMatched();
    void start(BlockSource &);
};
