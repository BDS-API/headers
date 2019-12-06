#pragma once

class HeavyBlock : BlockLegacy {

public:
    virtual ~HeavyBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void falling(void)const;
    virtual void onLand(BlockSource &, BlockPos const&)const;
    virtual bool isFreeToFall(BlockSource &, BlockPos const&)const;
    virtual void startFalling(BlockSource &, BlockPos const&, Block const*, bool)const;

    void HeavyBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&);
    void _scheduleCheck(BlockSource &, BlockPos const&, Block const&, int)const;
    void getTickDelay(void)const;
    void _scheduleCheckIfSliding(BlockSource &, BlockPos const&, Block const&)const;
    void _findBottomSlidingBlock(BlockSource &, BlockPos const&)const;
    void _tickBlocksAround2D(BlockSource &, BlockPos const&, Block const&)const;
    void checkSlide(BlockSource &, BlockPos const&)const;
    void triggerFallCheck(BlockSource &, BlockPos const&)const;
};
