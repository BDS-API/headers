#pragma once

#include "../../util/BlockPos.h"
#include "./BlockPosIterator.h"


class BlockPosIterator {

public:

    BlockPosIterator(BlockPos const&, BlockPos const&);
    void operator*();
    void operator!=(BlockPosIterator const&)const;
    void begin()const;
    void end()const;
};
