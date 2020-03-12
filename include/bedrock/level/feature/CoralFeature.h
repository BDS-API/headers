#pragma once

#include "../../../unmapped/Block.h"
#include "../../../unmapped/Material.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include <vector>
#include "Feature.h"
#include "../../util/BlockPos.h"
#include <utility>


class CoralFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~CoralFeature();
    void _setBlockOnSolid(BlockSource &, BlockPos const&, Block const*, int)const;
    void _randomDirectionExcept(Random &, unsigned char)const;
    void _placeSideDecorations(BlockSource &, BlockPos const&, Random &, unsigned char)const;
    void _starFormation(BlockSource &, Random &, BlockPos const&, Block const*, float, int, bool)const;
    CoralFeature();
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const;
    void _canOverwrite(BlockSource const&, BlockPos const&, int)const;
    void _isFree(Material const&)const;
    void _buildHand(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, Block const*)const;
    void _setBlock(BlockSource &, BlockPos const&, Block const*, int)const;
    void _buildPlantArm(BlockSource &, Random &, BlockPos const&, Block const*, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, unsigned char, bool)const;
    void _setCoralHangData(int, int, int)const;
    void _buildSmallClump(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, Block const*)const;
    void _placeCoral(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, int)const;
    void _starCorners(BlockSource &, Random &, BlockPos const&, Block const*, float, int, bool)const;
    void _turnFacingIntoint(unsigned char)const;
    void _buildSpire(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, Block const*)const;
    void _buildPlantLike(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, Block const*)const;
    void _randomDirectionExcept(Random &, unsigned char, unsigned char)const;
    void _placeTopDecorations(BlockSource &, BlockPos const&, Random &)const;
};
