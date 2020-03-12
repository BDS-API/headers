#pragma once

#include <string>
#include "BlockLegacy.h"


class HeavyBlock : BlockLegacy {

public:
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void startFalling(BlockSource &, BlockPos const&, Block const*, bool)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool isFreeToFall(BlockSource &, BlockPos const&)const;
    ~HeavyBlock();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void falling()const;
    virtual void onLand(BlockSource &, BlockPos const&)const;
    void triggerFallCheck(BlockSource &, BlockPos const&)const;
    void _findBottomSlidingBlock(BlockSource &, BlockPos const&)const;
    void getTickDelay()const;
    void _scheduleCheck(BlockSource &, BlockPos const&, Block const&, int)const;
    HeavyBlock(std::string const&, int, Material const&);
    void checkSlide(BlockSource &, BlockPos const&)const;
    void _tickBlocksAround2D(BlockSource &, BlockPos const&, Block const&)const;
    void _scheduleCheckIfSliding(BlockSource &, BlockPos const&, Block const&)const;
};
