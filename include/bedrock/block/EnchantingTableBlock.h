#pragma once

#include "../actor/Actor"
#include "../actor/Player"


class EnchantingTableBlock : ActorBlock {

public:
    virtual EnchantingTableBlock::~EnchantingTableBlock();
    virtual bool isCraftingBlock(void)const;
    virtual bool isInteractiveBlock(void)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;

    EnchantingTableBlock(std::string const&, int);
};
