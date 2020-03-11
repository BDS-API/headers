#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "./LeafBlock.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "./BlockLegacy.h"


class NewLeafBlock : LeafBlock {

public:
    virtual ~NewLeafBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getExtraResourceItem(Block const&)const;

//  NewLeafBlock(std::string const&, int, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
};
