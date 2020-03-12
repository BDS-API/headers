#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class IcebergFeature : Feature {

public:
    ~IcebergFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    IcebergFeature();
    void signedDistanceEllipse(int, int, BlockPos const&, int, int, float)const;
    void _isValidPlaceBlock(Block const&)const;
    void heightDependentRadiusSteep(Random &, int, int, int)const;
    void _isIcebergBlock(Block const&)const;
    void signedDistanceCircle(int, int, BlockPos const&, int, Random &)const;
    void heightDependentRadiusRound(Random &, int, int, int)const;
    void heightDependentRadiusEllipse(int, int, int)const;
    void setIcebergBlock(BlockPos const&, BlockSource &, Random &, int, int, bool, bool, Block const&)const;
    void generateIcebergBlock(BlockSource &, Random &, BlockPos const&, int, int, int, int, int, int, bool, bool, float, float, Block const&)const;
    void carve(int, int, BlockPos const&, BlockSource &, bool, float, BlockPos const&, float, float)const;
};
