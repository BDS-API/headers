#pragma once

#include "../../../unmapped/BlockSource"
#include "../../../unmapped/Block"


class CentralSpikedFeature : Feature {

public:
    virtual CentralSpikedFeature::~CentralSpikedFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CentralSpikedFeature(Block const&);
};
