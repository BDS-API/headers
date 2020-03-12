#pragma once

#include <vector>
#include "Feature.h"


class CoralCrustFeature : Feature {

public:
    ~CoralCrustFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _turnFacingIntoint(unsigned char)const;
    void _setCoralHangData(int, int, int)const;
    void _placeTopDecorations(BlockSource &, BlockPos const&, Random &)const;
    void _placeSideDecorations(BlockSource &, BlockPos const&, Random &, unsigned char)const;
    void _placeCoralBase(BlockSource &, BlockPos const&, Random &, LegacyStructureTemplate &, LegacyStructureSettings &)const;
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const;
    void _canOverwrite(BlockSource const&, BlockPos const&)const;
    void _placeCoral(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, int)const;
    CoralCrustFeature();
    void _randomDirectionExcept(Random &, unsigned char)const;
    void _getCropOffsetFromRot(int, int)const;
    void _getOffsetFromRot(int, int)const;
};
