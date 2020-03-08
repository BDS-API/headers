#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"
#include "../actor/Player"


class EnchantingTableBlock : ActorBlock {

public:
    virtual EnchantingTableBlock::~EnchantingTableBlock()
    virtual bool isCraftingBlock()const;
    virtual bool isInteractiveBlock()const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;

    EnchantingTableBlock(std::string const&, int);
};
