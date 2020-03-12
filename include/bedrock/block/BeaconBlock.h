#pragma once

#include <string>
#include "ActorBlock.h"


class BeaconBlock : ActorBlock {

public:
    virtual bool canContainLiquid()const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    ~BeaconBlock();
    BeaconBlock(std::string const&, int);
};
