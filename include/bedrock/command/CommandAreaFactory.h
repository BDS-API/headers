#pragma once

#include "../../unmapped/Dimension"
#include "../util/BlockPos"
#include "../../unmapped/Bounds"


class CommandAreaFactory {

public:

    CommandAreaFactory(Dimension &);
    void findArea(BlockPos const&, bool)const;
    void _getArea(Bounds const&, bool)const;
    void findAreaWithBuffer(BlockPos const&, bool)const;
    void findAreaWithBuffer(BlockPos const&, BlockPos const&, bool)const;
    void findArea(BlockPos const&, BlockPos const&, bool)const;
};
