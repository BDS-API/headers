#pragma once

class BlockPosIterator {

public:

    void BlockPosIterator(BlockPos const&, BlockPos const&);
    void begin(void)const;
    void end(void)const;
};
