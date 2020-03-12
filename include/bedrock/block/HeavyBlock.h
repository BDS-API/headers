#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class HeavyBlock : BlockLegacy {

public:
    virtual void startFalling(BlockSource &, BlockPos const&, Block const*, bool)const;
    ~HeavyBlock();
    virtual void onLand(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void falling()const;
    virtual bool isFreeToFall(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    void _scheduleCheckIfSliding(BlockSource &, BlockPos const&, Block const&)const;
    void triggerFallCheck(BlockSource &, BlockPos const&)const;
    void _scheduleCheck(BlockSource &, BlockPos const&, Block const&, int)const;
    void _findBottomSlidingBlock(BlockSource &, BlockPos const&)const;
    void getTickDelay()const;
    void _tickBlocksAround2D(BlockSource &, BlockPos const&, Block const&)const;
    void checkSlide(BlockSource &, BlockPos const&)const;
    HeavyBlock(std::string const&, int, Material const&);
};
