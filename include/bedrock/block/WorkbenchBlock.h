#pragma once

#include "../util/BlockPos.h"
#include "../actor/Player.h"
#include "./BlockLegacy.h"
#include <string>


class WorkbenchBlock : BlockLegacy {

public:
    virtual ~WorkbenchBlock();
    virtual bool isCraftingBlock()const;
    virtual void use(Player &, BlockPos const&)const;

    WorkbenchBlock(std::string const&, int);
};
