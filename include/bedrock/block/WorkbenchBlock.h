#pragma once

class WorkbenchBlock : BlockLegacy {

public:
    virtual WorkbenchBlock::~WorkbenchBlock();
    virtual bool isCraftingBlock(void)const;
    virtual void use(Player &, BlockPos const&)const;

    WorkbenchBlock(std::string const&, int);
};
