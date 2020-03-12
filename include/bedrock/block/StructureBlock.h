#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "ActorBlock.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"


class StructureBlock : ActorBlock {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    ~StructureBlock();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    StructureBlock(std::string const&, int);
};
