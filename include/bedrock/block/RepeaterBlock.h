#pragma once

#include <string>
#include "DiodeBlock.h"


class RepeaterBlock : DiodeBlock {

public:
    static long DELAY_RENDER_OFFSETS;
    static long DELAYS;

    virtual void use(Player &, BlockPos const&)const;
    virtual void getTurnOnDelay(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    ~RepeaterBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isInteractiveBlock()const;
    virtual bool isLocked(BlockSource &, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void getOffBlock(Block const*)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isAlternateInput(Block const&)const;
    virtual void getOnBlock(Block const*)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    void updateDelay(BlockSource &, BlockPos const&, bool)const;
    RepeaterBlock(std::string const&, int, bool);
};
