#pragma once

#include <string>
#include "FaceDirectionalBlock.h"


class ObserverBlock : FaceDirectionalBlock {

public:
    ~ObserverBlock(); // _ZN13ObserverBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13ObserverBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool isSignalSource()const; // _ZNK13ObserverBlock14isSignalSourceEv
    virtual bool isValidAuxValue(int)const; // _ZNK13ObserverBlock15isValidAuxValueEi
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK13ObserverBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK13ObserverBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK13ObserverBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK13ObserverBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK13ObserverBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK13ObserverBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK13ObserverBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void getVariant(Block const&)const; // _ZNK13ObserverBlock10getVariantERK5Block
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK13ObserverBlock13getMappedFaceEhRK5Block
    virtual void getFaceFlip(unsigned char, Block const&)const; // _ZNK13ObserverBlock11getFaceFlipEhRK5Block
    ObserverBlock(std::string const&, int); // _ZN13ObserverBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getPoweredDirection(BlockSource &, BlockPos const&)const; // _ZNK13ObserverBlock20_getPoweredDirectionER11BlockSourceRK8BlockPos
    void _startSignal(BlockSource &, BlockPos const&)const; // _ZNK13ObserverBlock12_startSignalER11BlockSourceRK8BlockPos
    void _updateState(BlockSource &, BlockPos const&, PulseCapacitor *, bool)const; // _ZNK13ObserverBlock12_updateStateER11BlockSourceRK8BlockPosP14PulseCapacitorb
    void _installCircuit(BlockSource &, BlockPos const&, bool)const; // _ZNK13ObserverBlock15_installCircuitER11BlockSourceRK8BlockPosb
};
