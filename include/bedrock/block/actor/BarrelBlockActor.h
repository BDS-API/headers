#pragma once

#include "./ChestBlockActor.h"
#include "../../actor/Player.h"
#include "../../util/BlockPos.h"
#include "../unmapped/BlockSource.h"
#include <string>


class BarrelBlockActor : ChestBlockActor {

public:
    virtual ~BarrelBlockActor();
    virtual void onPlace(BlockSource &);
    virtual std::string getName()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);

    BarrelBlockActor(BlockPos const&);
};
