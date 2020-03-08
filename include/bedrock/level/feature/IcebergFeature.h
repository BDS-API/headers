#pragma once

#include "../../../unmapped/BlockPos"
#include "../../../unmapped/Block"
#include "../../../unmapped/BlockSource"
#include "../../../unmapped/Random"


class IcebergFeature : Feature {

public:
    virtual IcebergFeature::~IcebergFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    IcebergFeature(void);
    void heightDependentRadiusEllipse(int, int, int)const;
    void heightDependentRadiusRound(Random &, int, int, int)const;
    void generateIcebergBlock(BlockSource &, Random &, BlockPos const&, int, int, int, int, int, int, bool, bool, float, float, Block const&)const;
    void _isIcebergBlock(Block const&)const;
    void heightDependentRadiusSteep(Random &, int, int, int)const;
    void carve(int, int, BlockPos const&, BlockSource &, bool, float, BlockPos const&, float, float)const;
    void signedDistanceEllipse(int, int, BlockPos const&, int, int, float)const;
    void signedDistanceCircle(int, int, BlockPos const&, int, Random &)const;
    void setIcebergBlock(BlockPos const&, BlockSource &, Random &, int, int, bool, bool, Block const&)const;
    void _isValidPlaceBlock(Block const&)const;
};
