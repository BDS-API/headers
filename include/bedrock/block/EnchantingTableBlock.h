#pragma once

#include <string>
#include "ActorBlock.h"


class EnchantingTableBlock : ActorBlock {

public:
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual bool isCraftingBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    ~EnchantingTableBlock();
    virtual bool isInteractiveBlock()const;
    EnchantingTableBlock(std::string const&, int);
};
