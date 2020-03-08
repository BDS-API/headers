#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Material"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"


class CoralFeature : Feature {

public:
    virtual CoralFeature::~CoralFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CoralFeature(void);
    void _placeCoral(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos, std::allocator<BlockPos>> &, std::vector&<std::pair<BlockPos, unsigned char>, std::allocator<std::pair>>, int)const;
    void _placeTopDecorations(BlockSource &, BlockPos const&, Random &)const;
    void _placeSideDecorations(BlockSource &, BlockPos const&, Random &, unsigned char)const;
    void _buildPlantLike(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos, std::allocator<BlockPos>> &, std::vector&<std::pair<BlockPos, unsigned char>, std::allocator<std::pair>>, Block const*)const;
    void _buildSpire(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos, std::allocator<BlockPos>> &, std::vector&<std::pair<BlockPos, unsigned char>, std::allocator<std::pair>>, Block const*)const;
    void _buildHand(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos, std::allocator<BlockPos>> &, std::vector&<std::pair<BlockPos, unsigned char>, std::allocator<std::pair>>, Block const*)const;
    void _buildSmallClump(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos, std::allocator<BlockPos>> &, std::vector&<std::pair<BlockPos, unsigned char>, std::allocator<std::pair>>, Block const*)const;
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const;
    void _randomDirectionExcept(Random &, unsigned char)const;
    void _turnFacingIntoint(unsigned char)const;
    void _setCoralHangData(int, int, int)const;
    void _isFree(Material const&)const;
    void _randomDirectionExcept(Random &, unsigned char, unsigned char)const;
    void _canOverwrite(BlockSource const&, BlockPos const&, int)const;
    void _setBlock(BlockSource &, BlockPos const&, Block const*, int)const;
    void _starFormation(BlockSource &, Random &, BlockPos const&, Block const*, float, int, bool)const;
    void _starCorners(BlockSource &, Random &, BlockPos const&, Block const*, float, int, bool)const;
    void _buildPlantArm(BlockSource &, Random &, BlockPos const&, Block const*, std::vector<BlockPos, std::allocator<BlockPos>> &, std::vector&<std::pair<BlockPos, unsigned char>, std::allocator<std::pair>>, unsigned char, bool)const;
    void _setBlockOnSolid(BlockSource &, BlockPos const&, Block const*, int)const;
};
