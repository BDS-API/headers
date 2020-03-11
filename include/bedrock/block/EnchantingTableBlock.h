#pragma once

#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../actor/Player.h"
#include <string>


class EnchantingTableBlock : ActorBlock {

public:
    virtual ~EnchantingTableBlock();
    virtual bool isCraftingBlock()const;
    virtual bool isInteractiveBlock()const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;

    EnchantingTableBlock(std::string const&, int);
};
