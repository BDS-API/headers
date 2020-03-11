#pragma once

#include "../util/BlockPos.h"
#include "../actor/Player.h"
#include "./ActorBlock.h"
#include <string>


class BeaconBlock : ActorBlock {

public:
    virtual ~BeaconBlock();
    virtual bool isInteractiveBlock()const;
    virtual bool canContainLiquid()const;
    virtual void use(Player &, BlockPos const&)const;

    BeaconBlock(std::string const&, int);
};
