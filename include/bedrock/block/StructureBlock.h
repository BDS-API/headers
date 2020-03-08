#pragma once

#include "unmapped/BlockSource"
#include "../util/Random"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../actor/Player"


class StructureBlock : ActorBlock {

public:
    virtual StructureBlock::~StructureBlock()
    virtual bool isInteractiveBlock()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;

    StructureBlock(std::string const&, int);
};
