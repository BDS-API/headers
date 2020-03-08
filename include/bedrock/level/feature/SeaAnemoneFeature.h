#pragma once

#include "../../../unmapped/BlockSource"


class SeaAnemoneFeature : Feature {

public:
    virtual SeaAnemoneFeature::~SeaAnemoneFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SeaAnemoneFeature(void);
};
