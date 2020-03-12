#pragma once

#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "LeafBlock.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class NewLeafBlock : LeafBlock {

public:
    ~NewLeafBlock();
    virtual void getVariant(Block const&)const;
    virtual void getExtraResourceItem(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
//  NewLeafBlock(std::string const&, int, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
};
