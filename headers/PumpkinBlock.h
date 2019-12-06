#pragma once

class PumpkinBlock : BlockLegacy {

public:
    virtual ~PumpkinBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;

    void PumpkinBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, bool, bool);
    void _canDispense(BlockSource &, Vec3 const&, unsigned char)const;
    void _golemPumpkinTester(BlockSource &, BlockPos const&, Block const&)const;
    void _canSpawnGolem(BlockSource &, BlockPos const&)const;
};
