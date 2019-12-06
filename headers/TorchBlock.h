#pragma once

class TorchBlock : BlockLegacy {

public:
    static long TorchBlock::DATA_FROM_FACING;
    static long TorchBlock::FACING_FROM_DATA;

    virtual ~TorchBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getIconYOffset(void)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched(void)const;

    void TorchBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, MaterialType);
    bool canBePlacedOn(BlockSource &, BlockPos const&, unsigned char)const;
    void _checkDoPop(BlockSource &, BlockPos const&)const;
    void _flameParticlePos(BlockPos const&, TorchFacing)const;
};
