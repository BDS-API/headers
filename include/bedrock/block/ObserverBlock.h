#pragma once

#include <string>
#include "FaceDirectionalBlock.h"


class ObserverBlock : FaceDirectionalBlock {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;
    ~ObserverBlock();
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool isSignalSource()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    void _startSignal(BlockSource &, BlockPos const&)const;
    void _updateState(BlockSource &, BlockPos const&, PulseCapacitor *, bool)const;
    ObserverBlock(std::string const&, int);
    void _installCircuit(BlockSource &, BlockPos const&, bool)const;
    void _getPoweredDirection(BlockSource &, BlockPos const&)const;
};
