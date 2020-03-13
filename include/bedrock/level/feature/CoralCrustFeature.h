#pragma once

#include "Feature.h"
#include <vector>


class CoralCrustFeature : Feature {

public:
    ~CoralCrustFeature(); // _ZN17CoralCrustFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK17CoralCrustFeature5placeER11BlockSourceRK8BlockPosR6Random
    CoralCrustFeature(); // _ZN17CoralCrustFeatureC2Ev
    void _getOffsetFromRot(int, int)const; // _ZNK17CoralCrustFeature17_getOffsetFromRotEii
    void _getCropOffsetFromRot(int, int)const; // _ZNK17CoralCrustFeature21_getCropOffsetFromRotEii
    void _placeCoralBase(BlockSource &, BlockPos const&, Random &, LegacyStructureTemplate &, LegacyStructureSettings &)const; // _ZNK17CoralCrustFeature15_placeCoralBaseER11BlockSourceRK8BlockPosR6RandomR23LegacyStructureTemplateR23LegacyStructureSettings
    void _placeCoral(BlockSource &, BlockPos const&, Random &, std::vector<BlockPos> &, std::vector<std::pair<BlockPos, unsigned char>> &, int)const; // _ZNK17CoralCrustFeature11_placeCoralER11BlockSourceRK8BlockPosR6RandomRSt6vectorIS2_SaIS2_EERS7_ISt4pairIS2_hESaISC_EEi
    void _placeTopDecorations(BlockSource &, BlockPos const&, Random &)const; // _ZNK17CoralCrustFeature20_placeTopDecorationsER11BlockSourceRK8BlockPosR6Random
    void _placeSideDecorations(BlockSource &, BlockPos const&, Random &, unsigned char)const; // _ZNK17CoralCrustFeature21_placeSideDecorationsER11BlockSourceRK8BlockPosR6Randomh
    void _canPlaceHangOn(BlockSource const&, BlockPos const&)const; // _ZNK17CoralCrustFeature15_canPlaceHangOnERK11BlockSourceRK8BlockPos
    void _randomDirectionExcept(Random &, unsigned char)const; // _ZNK17CoralCrustFeature22_randomDirectionExceptER6Randomh
    void _turnFacingIntoint(unsigned char)const; // _ZNK17CoralCrustFeature18_turnFacingIntointEh
    void _setCoralHangData(int, int, int)const; // _ZNK17CoralCrustFeature17_setCoralHangDataEiii
    void _canOverwrite(BlockSource const&, BlockPos const&)const; // _ZNK17CoralCrustFeature13_canOverwriteERK11BlockSourceRK8BlockPos
};
