#pragma once

#include "Feature.h"


class IcebergFeature : Feature {

public:
    ~IcebergFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void signedDistanceCircle(int, int, BlockPos const&, int, Random &)const;
    void heightDependentRadiusEllipse(int, int, int)const;
    void _isIcebergBlock(Block const&)const;
    void heightDependentRadiusSteep(Random &, int, int, int)const;
    void signedDistanceEllipse(int, int, BlockPos const&, int, int, float)const;
    IcebergFeature();
    void carve(int, int, BlockPos const&, BlockSource &, bool, float, BlockPos const&, float, float)const;
    void setIcebergBlock(BlockPos const&, BlockSource &, Random &, int, int, bool, bool, Block const&)const;
    void _isValidPlaceBlock(Block const&)const;
    void generateIcebergBlock(BlockSource &, Random &, BlockPos const&, int, int, int, int, int, int, bool, bool, float, float, Block const&)const;
    void heightDependentRadiusRound(Random &, int, int, int)const;
};
