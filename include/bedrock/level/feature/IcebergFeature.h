#pragma once

#include "Feature.h"


class IcebergFeature : Feature {

public:
    ~IcebergFeature(); // _ZN14IcebergFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK14IcebergFeature5placeER11BlockSourceRK8BlockPosR6Random
    IcebergFeature(); // _ZN14IcebergFeatureC2Ev
    void heightDependentRadiusEllipse(int, int, int)const; // _ZNK14IcebergFeature28heightDependentRadiusEllipseEiii
    void heightDependentRadiusRound(Random &, int, int, int)const; // _ZNK14IcebergFeature26heightDependentRadiusRoundER6Randomiii
    void generateIcebergBlock(BlockSource &, Random &, BlockPos const&, int, int, int, int, int, int, bool, bool, float, float, Block const&)const; // _ZNK14IcebergFeature20generateIcebergBlockER11BlockSourceR6RandomRK8BlockPosiiiiiibbffRK5Block
    void _isIcebergBlock(Block const&)const; // _ZNK14IcebergFeature15_isIcebergBlockERK5Block
    void heightDependentRadiusSteep(Random &, int, int, int)const; // _ZNK14IcebergFeature26heightDependentRadiusSteepER6Randomiii
    void carve(int, int, BlockPos const&, BlockSource &, bool, float, BlockPos const&, float, float)const; // _ZNK14IcebergFeature5carveEiiRK8BlockPosR11BlockSourcebfS2_ff
    void signedDistanceEllipse(int, int, BlockPos const&, int, int, float)const; // _ZNK14IcebergFeature21signedDistanceEllipseEiiRK8BlockPosiif
    void signedDistanceCircle(int, int, BlockPos const&, int, Random &)const; // _ZNK14IcebergFeature20signedDistanceCircleEiiRK8BlockPosiR6Random
    void setIcebergBlock(BlockPos const&, BlockSource &, Random &, int, int, bool, bool, Block const&)const; // _ZNK14IcebergFeature15setIcebergBlockERK8BlockPosR11BlockSourceR6RandomiibbRK5Block
    void _isValidPlaceBlock(Block const&)const; // _ZNK14IcebergFeature18_isValidPlaceBlockERK5Block
};
