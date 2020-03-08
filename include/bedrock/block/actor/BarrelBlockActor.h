#pragma once

#include "../unmapped/BlockSource"
#include "../../util/BlockPos"
#include "../../actor/Player"


class BarrelBlockActor : ChestBlockActor {

public:
    virtual BarrelBlockActor::~BarrelBlockActor()
    virtual void onPlace(BlockSource &);
    virtual void getName()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);

    BarrelBlockActor(BlockPos const&);
};
