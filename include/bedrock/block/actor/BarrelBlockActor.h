#pragma once

#include <string>
#include "ChestBlockActor.h"


class BarrelBlockActor : ChestBlockActor {

public:
    ~BarrelBlockActor(); // _ZN16BarrelBlockActorD2Ev
    virtual void onPlace(BlockSource &); // _ZN16BarrelBlockActor7onPlaceER11BlockSource
    virtual std::string getName()const; // _ZNK16BarrelBlockActor7getNameB5cxx11Ev
    virtual void startOpen(Player &); // _ZN16BarrelBlockActor9startOpenER6Player
    virtual void stopOpen(Player &); // _ZN16BarrelBlockActor8stopOpenER6Player
    virtual void playOpenSound(BlockSource &); // _ZN16BarrelBlockActor13playOpenSoundER11BlockSource
    virtual void playCloseSound(BlockSource &); // _ZN16BarrelBlockActor14playCloseSoundER11BlockSource
    BarrelBlockActor(BlockPos const&); // _ZN16BarrelBlockActorC2ERK8BlockPos
};
