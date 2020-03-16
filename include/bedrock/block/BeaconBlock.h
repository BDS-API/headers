#pragma once

#include <string>
#include "ActorBlock.h"


class BeaconBlock : public ActorBlock {

public:
    virtual ~BeaconBlock(); // _ZN11BeaconBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isInteractiveBlock()const; // _ZNK11BeaconBlock18isInteractiveBlockEv
    virtual bool canContainLiquid()const; // _ZNK11BeaconBlock16canContainLiquidEv
    virtual void use(Player &, BlockPos const&)const; // _ZNK11BeaconBlock3useER6PlayerRK8BlockPos
    BeaconBlock(std::string const&, int); // _ZN11BeaconBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
