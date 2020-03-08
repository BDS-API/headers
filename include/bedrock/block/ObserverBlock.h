#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../util/Vec3"
#include "../level/circuit/component/PulseCapacitor"


class ObserverBlock : FaceDirectionalBlock {

public:
    virtual ObserverBlock::~ObserverBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isSignalSource()const;
    virtual bool isValidAuxValue(int)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    ObserverBlock(std::string const&, int);
    void _getPoweredDirection(BlockSource &, BlockPos const&)const;
    void _startSignal(BlockSource &, BlockPos const&)const;
    void _updateState(BlockSource &, BlockPos const&, PulseCapacitor *, bool)const;
    void _installCircuit(BlockSource &, BlockPos const&, bool)const;
};
