#pragma once

#include "../../util/BlockPos"


class BlockPosIterator {

public:

    BlockPosIterator(BlockPos const&, BlockPos const&);
    void begin()const;
    void end()const;
};
