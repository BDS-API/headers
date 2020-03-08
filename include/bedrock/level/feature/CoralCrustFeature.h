#pragma once

#include "../../../unmapped/LegacyStructureTemplate"
#include "../../util/Random"
#include "../../../unmapped/LegacyStructureSettings"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class CoralCrustFeature : Feature {

public:
    CoralCrustFeature::~CoralCrustFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CoralCrustFeature(void);
    void _getOffsetFromRot(int, int)const;
    void _getCropOffsetFromRot(int, int)const;
    void _placeCoralBase(BlockSource &, BlockPos const&, Random &, LegacyStructureTemplate &, LegacyStructureSettings &)const;
    void _placeCoral(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos, std::allocator<BlockPos>> &, std::vector&<std::pair<BlockPos, unsigned char>, std::allocator<std::pair>>, int)const;
    void _placeTopDecorations(BlockSource &, BlockPos const&, Random &)const;
    void _placeSideDecorations(BlockSource &, BlockPos const&, Random &, unsigned char)const;
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const;
    void _randomDirectionExcept(Random &, unsigned char)const;
    void _turnFacingIntoint(unsigned char)const;
    void _setCoralHangData(int, int, int)const;
    void _canOverwrite(BlockSource const&, BlockPos const&)const;
};
