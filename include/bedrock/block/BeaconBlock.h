#pragma once

#include "../actor/Player"


class BeaconBlock : ActorBlock {

public:
    virtual BeaconBlock::~BeaconBlock();
    virtual bool isInteractiveBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void use(Player &, BlockPos const&)const;

    BeaconBlock(std::string const&, int);
};
