#pragma once

#include "../../../unmapped/LegacyStructureTemplate.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../../unmapped/LegacyStructureSettings.h"
#include <vector>
#include "Feature.h"
#include "../../util/BlockPos.h"
#include <utility>


class CoralCrustFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~CoralCrustFeature();
    void _placeCoral(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, int)const;
    void _placeSideDecorations(BlockSource &, BlockPos const&, Random &, unsigned char)const;
    void _turnFacingIntoint(unsigned char)const;
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const;
    void _getCropOffsetFromRot(int, int)const;
    void _placeTopDecorations(BlockSource &, BlockPos const&, Random &)const;
    void _setCoralHangData(int, int, int)const;
    void _randomDirectionExcept(Random &, unsigned char)const;
    void _canOverwrite(BlockSource const&, BlockPos const&)const;
    void _placeCoralBase(BlockSource &, BlockPos const&, Random &, LegacyStructureTemplate &, LegacyStructureSettings &)const;
    void _getOffsetFromRot(int, int)const;
    CoralCrustFeature();
};
