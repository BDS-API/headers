#pragma once

#include <string>
#include "ActorBlock.h"


class DaylightDetectorBlock : ActorBlock {

public:
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void updateSignalStrength(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void updateShape(BlockSource &, BlockPos const&);
    ~DaylightDetectorBlock();
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool isSignalSource()const;
    virtual bool isInteractiveBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    DaylightDetectorBlock(std::string const&, int, bool);
};
