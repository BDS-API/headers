#pragma once

#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class StoneBrickBlock : BlockLegacy {

public:
    virtual bool isAuxValueRelevantForPicking()const;
    ~StoneBrickBlock();
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    StoneBrickBlock(std::string const&, int, Material const&);
};
