#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/Vec3"
#include "../container/Container"


class PumpkinBlock : BlockLegacy {

public:
    virtual PumpkinBlock::~PumpkinBlock()
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;

    PumpkinBlock(std::string const&, int, bool, bool);
    void _canDispense(BlockSource &, Vec3 const&, unsigned char)const;
    void _golemPumpkinTester(BlockSource &, BlockPos const&, Block const&)const;
    void _canSpawnGolem(BlockSource &, BlockPos const&)const;
};
