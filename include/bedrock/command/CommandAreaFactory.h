#pragma once

#include "../../unmapped/Bounds.h"
#include "../../unmapped/Dimension.h"
#include "../util/BlockPos.h"


class CommandAreaFactory {

public:
    void findArea(BlockPos const&, BlockPos const&, bool)const;
    CommandAreaFactory(Dimension &);
    void findAreaWithBuffer(BlockPos const&, BlockPos const&, bool)const;
    void findArea(BlockPos const&, bool)const;
    void findAreaWithBuffer(BlockPos const&, bool)const;
    void _getArea(Bounds const&, bool)const;
};
