#pragma once

#include "../util/BlockPos"
#include "../actor/Player"


class WorkbenchBlock : BlockLegacy {

public:
    WorkbenchBlock::~WorkbenchBlock()
    virtual bool isCraftingBlock()const;
    virtual void use(Player &, BlockPos const&)const;

    WorkbenchBlock(std::string const&, int);
};
