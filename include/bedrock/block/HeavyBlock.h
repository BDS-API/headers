#pragma once

#include <string>
#include "BlockLegacy.h"


class HeavyBlock : BlockLegacy {

public:
    ~HeavyBlock(); // _ZN10HeavyBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK10HeavyBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK10HeavyBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK10HeavyBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK10HeavyBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void falling()const; // _ZNK10HeavyBlock7fallingEv
    virtual void onLand(BlockSource &, BlockPos const&)const; // _ZNK10HeavyBlock6onLandER11BlockSourceRK8BlockPos
    virtual bool isFreeToFall(BlockSource &, BlockPos const&)const; // _ZNK10HeavyBlock12isFreeToFallER11BlockSourceRK8BlockPos
    virtual void startFalling(BlockSource &, BlockPos const&, Block const*, bool)const; // _ZNK10HeavyBlock12startFallingER11BlockSourceRK8BlockPosPK5Blockb
    HeavyBlock(std::string const&, int, Material const&); // _ZN10HeavyBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    void _scheduleCheck(BlockSource &, BlockPos const&, Block const&, int)const; // _ZNK10HeavyBlock14_scheduleCheckER11BlockSourceRK8BlockPosRK5Blocki
    void getTickDelay()const; // _ZNK10HeavyBlock12getTickDelayEv
    void _scheduleCheckIfSliding(BlockSource &, BlockPos const&, Block const&)const; // _ZNK10HeavyBlock23_scheduleCheckIfSlidingER11BlockSourceRK8BlockPosRK5Block
    void _findBottomSlidingBlock(BlockSource &, BlockPos const&)const; // _ZNK10HeavyBlock23_findBottomSlidingBlockER11BlockSourceRK8BlockPos
    void _tickBlocksAround2D(BlockSource &, BlockPos const&, Block const&)const; // _ZNK10HeavyBlock19_tickBlocksAround2DER11BlockSourceRK8BlockPosRK5Block
    void checkSlide(BlockSource &, BlockPos const&)const; // _ZNK10HeavyBlock10checkSlideER11BlockSourceRK8BlockPos
    void triggerFallCheck(BlockSource &, BlockPos const&)const; // _ZNK10HeavyBlock16triggerFallCheckER11BlockSourceRK8BlockPos
};
