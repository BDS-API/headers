#pragma once

#include "../../unmapped/Bounds"
#include "../../unmapped/Dimension"
#include "../util/BlockPos"


class CommandAreaFactory {

public:

    CommandAreaFactory(Dimension &);
    void findArea(BlockPos const&, bool)const;
    void _getArea(Bounds const&, bool)const;
    void findAreaWithBuffer(BlockPos const&, bool)const;
    void findAreaWithBuffer(BlockPos const&, BlockPos const&, bool)const;
    void findArea(BlockPos const&, BlockPos const&, bool)const;
};
