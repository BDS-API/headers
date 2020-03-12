#pragma once

#include <string>
#include "BlockLegacy.h"


class WorkbenchBlock : BlockLegacy {

public:
    virtual void use(Player &, BlockPos const&)const;
    virtual bool isCraftingBlock()const;
    ~WorkbenchBlock();
    WorkbenchBlock(std::string const&, int);
};
