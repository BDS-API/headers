#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "FaceDirectionalBlock.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "../level/circuit/component/PulseCapacitor.h"


class ObserverBlock : FaceDirectionalBlock {

public:
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;
    ~ObserverBlock();
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool isSignalSource()const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    void _startSignal(BlockSource &, BlockPos const&)const;
    void _updateState(BlockSource &, BlockPos const&, PulseCapacitor *, bool)const;
    void _installCircuit(BlockSource &, BlockPos const&, bool)const;
    void _getPoweredDirection(BlockSource &, BlockPos const&)const;
    ObserverBlock(std::string const&, int);
};
