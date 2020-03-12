#pragma once

#include <string>
#include "../actor/Player.h"
#include "ActorBlock.h"
#include "../util/BlockPos.h"


class BeaconBlock : ActorBlock {

public:
    virtual void use(Player &, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    ~BeaconBlock();
    virtual bool isInteractiveBlock()const;
    BeaconBlock(std::string const&, int);
};
