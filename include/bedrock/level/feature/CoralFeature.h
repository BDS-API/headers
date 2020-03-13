#pragma once

#include "Feature.h"
#include <vector>


class CoralFeature : Feature {

public:
    ~CoralFeature(); // _ZN12CoralFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK12CoralFeature5placeER11BlockSourceRK8BlockPosR6Random
    CoralFeature(); // _ZN12CoralFeatureC2Ev
    void _placeCoral(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, int)const; // _ZNK12CoralFeature11_placeCoralER11BlockSourceRK8BlockPosR6RandomRSt6vectorIS2_SaIS2_EERS7_ISt4pairIS2_hESaISC_EEi
    void _placeTopDecorations(BlockSource &, BlockPos const&, Random &)const; // _ZNK12CoralFeature20_placeTopDecorationsER11BlockSourceRK8BlockPosR6Random
    void _placeSideDecorations(BlockSource &, BlockPos const&, Random &, unsigned char)const; // _ZNK12CoralFeature21_placeSideDecorationsER11BlockSourceRK8BlockPosR6Randomh
    void _buildPlantLike(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, Block const*)const; // _ZNK12CoralFeature15_buildPlantLikeER11BlockSourceRK8BlockPosR6RandomRSt6vectorIS2_SaIS2_EERS7_ISt4pairIS2_hESaISC_EEPK5Block
    void _buildSpire(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, Block const*)const; // _ZNK12CoralFeature11_buildSpireER11BlockSourceRK8BlockPosR6RandomRSt6vectorIS2_SaIS2_EERS7_ISt4pairIS2_hESaISC_EEPK5Block
    void _buildHand(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, Block const*)const; // _ZNK12CoralFeature10_buildHandER11BlockSourceRK8BlockPosR6RandomRSt6vectorIS2_SaIS2_EERS7_ISt4pairIS2_hESaISC_EEPK5Block
    void _buildSmallClump(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, Block const*)const; // _ZNK12CoralFeature16_buildSmallClumpER11BlockSourceRK8BlockPosR6RandomRSt6vectorIS2_SaIS2_EERS7_ISt4pairIS2_hESaISC_EEPK5Block
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const; // _ZNK12CoralFeature15_canPlaceHangOnERK11BlockSourceRK8BlockPos
    void _randomDirectionExcept(Random &, unsigned char)const; // _ZNK12CoralFeature22_randomDirectionExceptER6Randomh
    void _turnFacingIntoint(unsigned char)const; // _ZNK12CoralFeature18_turnFacingIntointEh
    void _setCoralHangData(int, int, int)const; // _ZNK12CoralFeature17_setCoralHangDataEiii
    void _isFree(Material const&)const; // _ZNK12CoralFeature7_isFreeERK8Material
    void _randomDirectionExcept(Random &, unsigned char, unsigned char)const; // _ZNK12CoralFeature22_randomDirectionExceptER6Randomhh
    void _canOverwrite(BlockSource const&, BlockPos const&, int)const; // _ZNK12CoralFeature13_canOverwriteERK11BlockSourceRK8BlockPosi
    void _setBlock(BlockSource &, BlockPos const&, Block const*, int)const; // _ZNK12CoralFeature9_setBlockER11BlockSourceRK8BlockPosPK5Blocki
    void _starFormation(BlockSource &, Random &, BlockPos const&, Block const*, float, int, bool)const; // _ZNK12CoralFeature14_starFormationER11BlockSourceR6RandomRK8BlockPosPK5Blockfib
    void _starCorners(BlockSource &, Random &, BlockPos const&, Block const*, float, int, bool)const; // _ZNK12CoralFeature12_starCornersER11BlockSourceR6RandomRK8BlockPosPK5Blockfib
    void _buildPlantArm(BlockSource &, Random &, BlockPos const&, Block const*, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, unsigned char, bool)const; // _ZNK12CoralFeature14_buildPlantArmER11BlockSourceR6RandomRK8BlockPosPK5BlockRSt6vectorIS4_SaIS4_EERSA_ISt4pairIS4_hESaISF_EEhb
    void _setBlockOnSolid(BlockSource &, BlockPos const&, Block const*, int)const; // _ZNK12CoralFeature16_setBlockOnSolidER11BlockSourceRK8BlockPosPK5Blocki
};
