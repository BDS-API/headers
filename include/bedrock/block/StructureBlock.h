#pragma once

#include "../actor/Player"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class StructureBlock : ActorBlock {

public:
    StructureBlock::~StructureBlock()
    virtual bool isInteractiveBlock()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;

    StructureBlock(std::string const&, int);
};
