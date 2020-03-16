#pragma once

#include <string>
#include "BlockLegacy.h"


class RedstoneBlock : public BlockLegacy {

public:
    virtual ~RedstoneBlock(); // _ZN13RedstoneBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isSignalSource()const; // _ZNK13RedstoneBlock14isSignalSourceEv
    virtual bool shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK13RedstoneBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK13RedstoneBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK13RedstoneBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual bool canSpawnOn()const; // _ZNK13RedstoneBlock10canSpawnOnEv
    RedstoneBlock(std::string const&, int); // _ZN13RedstoneBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
