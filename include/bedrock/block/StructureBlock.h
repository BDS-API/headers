#pragma once

#include <string>
#include "ActorBlock.h"


class StructureBlock : ActorBlock {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    ~StructureBlock();
    virtual void use(Player &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    StructureBlock(std::string const&, int);
};
