#pragma once

#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../actor/Player"


class BarrelBlockActor : ChestBlockActor {

public:
    BarrelBlockActor::~BarrelBlockActor()
    virtual void onPlace(BlockSource &);
    virtual void getName()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);

    BarrelBlockActor(BlockPos const&);
};
