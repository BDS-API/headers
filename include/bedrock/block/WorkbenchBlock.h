#pragma once

#include <string>
#include "BlockLegacy.h"
#include "../actor/Player.h"
#include "../util/BlockPos.h"


class WorkbenchBlock : BlockLegacy {

public:
    ~WorkbenchBlock();
    virtual bool isCraftingBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    WorkbenchBlock(std::string const&, int);
};
