#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../actor/Player.h"


class EnchantingTableBlock : ActorBlock {

public:
    virtual bool isCraftingBlock()const;
    virtual bool isInteractiveBlock()const;
    ~EnchantingTableBlock();
    virtual void use(Player &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    EnchantingTableBlock(std::string const&, int);
};
