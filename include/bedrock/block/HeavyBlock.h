#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Material"
#include "../../unmapped/Block"
#include "../util/BlockPos"


class HeavyBlock : BlockLegacy {

public:
    virtual HeavyBlock::~HeavyBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void falling()const;
    virtual void onLand(BlockSource &, BlockPos const&)const;
    virtual bool isFreeToFall(BlockSource &, BlockPos const&)const;
    virtual void startFalling(BlockSource &, BlockPos const&, Block const*, bool)const;

    HeavyBlock(std::string const&, int, Material const&);
    void _scheduleCheck(BlockSource &, BlockPos const&, Block const&, int)const;
    void getTickDelay()const;
    void _scheduleCheckIfSliding(BlockSource &, BlockPos const&, Block const&)const;
    void _findBottomSlidingBlock(BlockSource &, BlockPos const&)const;
    void _tickBlocksAround2D(BlockSource &, BlockPos const&, Block const&)const;
    void checkSlide(BlockSource &, BlockPos const&)const;
    void triggerFallCheck(BlockSource &, BlockPos const&)const;
};
