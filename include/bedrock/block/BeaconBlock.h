#pragma once

#include "../util/BlockPos"
#include "../actor/Player"


class BeaconBlock : ActorBlock {

public:
    virtual BeaconBlock::~BeaconBlock()
    virtual bool isInteractiveBlock()const;
    virtual bool canContainLiquid()const;
    virtual void use(Player &, BlockPos const&)const;

    BeaconBlock(std::string const&, int);
};
