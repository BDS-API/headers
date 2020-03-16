#pragma once

#include "TorchBlock.h"
#include <string>


class RedstoneTorchBlock : public TorchBlock {

public:
    virtual ~RedstoneTorchBlock(); // _ZN18RedstoneTorchBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isSignalSource()const; // _ZNK18RedstoneTorchBlock14isSignalSourceEv
    virtual bool shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK18RedstoneTorchBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK18RedstoneTorchBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK18RedstoneTorchBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK18RedstoneTorchBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK18RedstoneTorchBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK18RedstoneTorchBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK18RedstoneTorchBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual bool canSpawnOn()const; // _ZNK18RedstoneTorchBlock10canSpawnOnEv
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK18RedstoneTorchBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK18RedstoneTorchBlock24getSilkTouchItemInstanceERK5Block
    virtual void getTickDelay(); // _ZN18RedstoneTorchBlock12getTickDelayEv
    RedstoneTorchBlock(std::string const&, int, bool); // _ZN18RedstoneTorchBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
    void _installCircuit(BlockSource &, BlockPos const&)const; // _ZNK18RedstoneTorchBlock15_installCircuitER11BlockSourceRK8BlockPos
};
