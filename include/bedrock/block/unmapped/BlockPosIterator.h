#pragma once

#include "../../util/BlockPos.h"


class BlockPosIterator {

public:
    void begin()const;
    void operator*();
    void operator!=(BlockPosIterator const&)const;
    void end()const;
    BlockPosIterator(BlockPos const&, BlockPos const&);
};
