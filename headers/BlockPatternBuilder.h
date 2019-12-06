#pragma once

class BlockPatternBuilder {

public:

    void start(BlockSource &);
    void BlockPatternBuilder(BlockSource &);
    void aisle(int, ...);
    void define(char, Block const&, std::function<bool ()(BlockSource &, BlockPos const&, Block const&)>);
    void build(void);
    void _allCharactersMatched(void);
    void match(BlockPos const&);
    void _fitsBlockPatternEntry(int, int, BlockPos const&, Block const&);
    void match(BlockPos const&, int, int);
    void match(BlockPos const&, int, int, unsigned char, unsigned char);
    void _fitsBlockPatternEntry(int, int, BlockPos const&);
    void replaceBlocks(char, BuildMatch, Block const&, bool);
    void _isAnyPattern(char);
    void _getPattern(int, int);
    bool isReadyForMatch(void);
    void _getBlockPatternEntry(int, int);
    void _fitsAnyPattern(int, int);
};
