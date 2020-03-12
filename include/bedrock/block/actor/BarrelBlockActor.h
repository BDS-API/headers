#pragma once

#include <string>
#include "ChestBlockActor.h"


class BarrelBlockActor : ChestBlockActor {

public:
    virtual void stopOpen(Player &);
    virtual void playOpenSound(BlockSource &);
    ~BarrelBlockActor();
    virtual void startOpen(Player &);
    virtual void playCloseSound(BlockSource &);
    virtual std::string getName()const;
    virtual void onPlace(BlockSource &);
    BarrelBlockActor(BlockPos const&);
};
