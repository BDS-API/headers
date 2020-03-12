#pragma once

#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class LightGemBlock : BlockLegacy {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~LightGemBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    LightGemBlock(std::string const&, int, Material const&);
};
