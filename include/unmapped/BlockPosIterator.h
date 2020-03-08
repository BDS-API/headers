#pragma once



class BlockPosIterator {

public:

    BlockPosIterator(BlockPos const&, BlockPos const&);
    void begin(void)const;
    void end(void)const;
};
