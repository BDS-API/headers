#pragma once

#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "./BlockLegacy.h"


class LightGemBlock : BlockLegacy {

public:
    virtual ~LightGemBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    LightGemBlock(std::string const&, int, Material const&);
};
