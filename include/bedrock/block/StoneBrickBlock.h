#pragma once

#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "./BlockLegacy.h"


class StoneBrickBlock : BlockLegacy {

public:
    virtual ~StoneBrickBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StoneBrickBlock(std::string const&, int, Material const&);
};
