#pragma once

#include "../../../unmapped/BuildMatch.h"
#include <functional>


class BlockPatternBuilder {

public:
    ~BlockPatternBuilder();
    void _fitsBlockPatternEntry(int, int, BlockPos const&);
    void match(BlockPos const&, int, int);
    void match(BlockPos const&);
    void _getPattern(int, int);
    void start(BlockSource &);
    void define(char, Block const&, std::function<bool (BlockSource &, BlockPos const&, Block const&)>);
    void build();
    void match(BlockPos const&, int, int, unsigned char, unsigned char);
//  void aisle(int, ...); //TODO: incomplete function definition
    void _allCharactersMatched();
    void replaceBlocks(char, BuildMatch, Block const&, bool);
    void _fitsAnyPattern(int, int);
    BlockPatternBuilder(BlockSource &);
    void _isAnyPattern(char);
    void _getBlockPatternEntry(int, int);
    void _fitsBlockPatternEntry(int, int, BlockPos const&, Block const&);
    bool isReadyForMatch();
};
