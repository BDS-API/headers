#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"


class DaylightDetectorBlock : ActorBlock {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getVariant(Block const&)const;
    virtual void updateShape(BlockSource &, BlockPos const&);
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void updateSignalStrength(BlockSource &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual bool isSignalSource()const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    ~DaylightDetectorBlock();
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    DaylightDetectorBlock(std::string const&, int, bool);
};
