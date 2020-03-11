#pragma once

#include "../util/BlockPos.h"
#include "../../unmapped/Bounds.h"
#include "../../unmapped/Dimension.h"


class CommandAreaFactory {

public:

    CommandAreaFactory(Dimension &);
    void findArea(BlockPos const&, bool)const;
    void _getArea(Bounds const&, bool)const;
    void findAreaWithBuffer(BlockPos const&, bool)const;
    void findAreaWithBuffer(BlockPos const&, BlockPos const&, bool)const;
    void findArea(BlockPos const&, BlockPos const&, bool)const;
};
