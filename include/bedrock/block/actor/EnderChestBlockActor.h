#pragma once

#include <string>
#include "ChestBlockActor.h"


class EnderChestBlockActor : public ChestBlockActor {

public:
    static long ITEMS_SIZE;

    virtual ~EnderChestBlockActor(); // _ZN20EnderChestBlockActorD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getName()const; // _ZNK20EnderChestBlockActor7getNameB5cxx11Ev
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK20EnderChestBlockActor13canPushInItemER11BlockSourceiiRK12ItemInstance
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK20EnderChestBlockActor14canPullOutItemER11BlockSourceiiRK12ItemInstance
    virtual void playOpenSound(BlockSource &); // _ZN20EnderChestBlockActor13playOpenSoundER11BlockSource
    virtual void playCloseSound(BlockSource &); // _ZN20EnderChestBlockActor14playCloseSoundER11BlockSource
//    EnderChestBlockActor(long, std::string const&, long, BlockPos const&); //TODO: incomplete function definition // _ZN20EnderChestBlockActorC2E14BlockActorTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE20BlockActorRendererIdRK8BlockPos
    void createEnderChestBlockEntity(BlockPos const&); // _ZN20EnderChestBlockActor27createEnderChestBlockEntityERK8BlockPos
};
