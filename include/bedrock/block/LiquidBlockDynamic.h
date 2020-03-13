#pragma once

#include <string>
#include "LiquidBlock.h"


class LiquidBlockDynamic : LiquidBlock {

public:
    ~LiquidBlockDynamic(); // _ZN18LiquidBlockDynamicD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK18LiquidBlockDynamic4tickER11BlockSourceRK8BlockPosR6Random
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK18LiquidBlockDynamic7onPlaceER11BlockSourceRK8BlockPos
    LiquidBlockDynamic(std::string const&, int, Material const&); // _ZN18LiquidBlockDynamicC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    void _spread(BlockSource &, BlockPos const&, int, bool)const; // _ZNK18LiquidBlockDynamic7_spreadER11BlockSourceRK8BlockPosib
    void _trySpreadTo(BlockSource &, BlockPos const&, int, BlockPos const&, unsigned char)const; // _ZNK18LiquidBlockDynamic12_trySpreadToER11BlockSourceRK8BlockPosiS4_h
    void _canSpreadTo(BlockSource &, BlockPos const&, BlockPos const&, unsigned char)const; // _ZNK18LiquidBlockDynamic12_canSpreadToER11BlockSourceRK8BlockPosS4_h
    void shouldBecomeStatic(BlockSource &, BlockPos const&, Random &)const; // _ZNK18LiquidBlockDynamic18shouldBecomeStaticER11BlockSourceRK8BlockPosR6Random
    void _tick(BlockSource &, BlockPos const&, Random &, bool)const; // _ZNK18LiquidBlockDynamic5_tickER11BlockSourceRK8BlockPosR6Randomb
    void _getHighest(BlockSource &, BlockPos const&, int, int &)const; // _ZNK18LiquidBlockDynamic11_getHighestER11BlockSourceRK8BlockPosiRi
    void _setStatic(BlockSource &, BlockPos const&, bool)const; // _ZNK18LiquidBlockDynamic10_setStaticER11BlockSourceRK8BlockPosb
    void _isWaterBlocking(BlockSource &, BlockPos const&, BlockPos const&, unsigned char)const; // _ZNK18LiquidBlockDynamic16_isWaterBlockingER11BlockSourceRK8BlockPosS4_h
    void _getSpread(BlockSource &, BlockPos const&)const; // _ZNK18LiquidBlockDynamic10_getSpreadER11BlockSourceRK8BlockPos
    void _getSlopeDistance(BlockSource &, BlockPos const&, int, int)const; // _ZNK18LiquidBlockDynamic17_getSlopeDistanceER11BlockSourceRK8BlockPosii
};
