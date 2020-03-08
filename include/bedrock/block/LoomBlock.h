#pragma once

#include "../actor/Player"


class LoomBlock : FaceDirectionalBlock {

public:
    virtual LoomBlock::~LoomBlock();
    virtual bool isCraftingBlock(void)const;
    virtual void use(Player &, BlockPos const&)const;

    LoomBlock(std::string const&, int);
};
