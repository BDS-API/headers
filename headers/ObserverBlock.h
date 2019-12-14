#pragma once

class ObserverBlock : FaceDirectionalBlock {

public:
    virtual ~ObserverBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isSignalSource(void)const;
    virtual bool isValidAuxValue(int)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    void ObserverBlock(std::string const&, int);
    void _getPoweredDirection(BlockSource &, BlockPos const&)const;
    void _startSignal(BlockSource &, BlockPos const&)const;
    void _updateState(BlockSource &, BlockPos const&, PulseCapacitor *, bool)const;
    void _installCircuit(BlockSource &, BlockPos const&, bool)const;
};
