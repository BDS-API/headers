#pragma once

#include "../../util/BlockPos.h"
#include "../unmapped/BlockSource.h"
#include "ChestBlockActor.h"
#include "../../actor/Player.h"


class BarrelBlockActor : ChestBlockActor {

public:
    virtual std::string getName()const;
    virtual void stopOpen(Player &);
    virtual void onPlace(BlockSource &);
    ~BarrelBlockActor();
    virtual void playOpenSound(BlockSource &);
    virtual void startOpen(Player &);
    virtual void playCloseSound(BlockSource &);
    BarrelBlockActor(BlockPos const&);
};
