#pragma once

class WorkbenchBlock : BlockLegacy {

public:
    virtual ~WorkbenchBlock();
    virtual bool isCraftingBlock(void)const;
    virtual void use(Player &, BlockPos const&)const;

    void WorkbenchBlock(std::string const&, int);
};
